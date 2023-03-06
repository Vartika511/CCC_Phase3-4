import heapq

n, k = map(int, input().split())

# create a list of tuples to store the arrival and departure dates of bookings
bookings = []
for i in range(n):
    arrival, departure = map(int, input().split())
    bookings.append((arrival, departure))

# sort the bookings by their arrival date
bookings.sort()

# use a heap to keep track of the current bookings
heap = []

for booking in bookings:
    # check if there are any bookings that have already departed
    while heap and heap[0] < booking[0]:
        heapq.heappop(heap)

    # add the current booking to the heap
    heapq.heappush(heap, booking[1])

    # check if there are enough rooms available for the current booking
    if len(heap) > k:
        print("no")
        exit()

print("yes")
