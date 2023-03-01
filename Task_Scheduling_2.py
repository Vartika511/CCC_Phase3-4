#Question is same as Task Scheduling 1
class Job:
    def __init__(self, taskId, deadline, profit):
        self.taskId = taskId
        self.deadline = deadline
        self.profit = profit
def scheduleJobs(jobs, T):
    profit = 0
    slot = [-1] * T
    jobs.sort(key=lambda x: x.profit, reverse=True)
    for job in jobs:
        for j in reversed(range(job.deadline)):
            if j < T and slot[j] == -1:
                slot[j] = job.taskId
                profit += job.profit
                break
    print( profit)
if __name__ == '__main__':
    t=int(input())
    while t!=0:
        t-=1
        n=int(input())
        jobs = []
        deadline=[int(i) for i in input().split()]
        profit=[int(i) for i in input().split()]
        for i in range(n):
            jobs.append(Job(i+1, deadline[i], profit[i]))
        maxdead=max(deadline)
        scheduleJobs(jobs, maxdead)
