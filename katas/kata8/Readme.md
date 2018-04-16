# You've built an inflight entertainment system with on-demand movie streaming.
Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. **So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length**.

Write a function that takes an integer `flight_length` (in minutes) and a list of integers `movie_lengths` (in minutes) and returns a boolean indicating whether there are two numbers in `movie_lengths` whose sum equals `flight_length`.

When building your function:

- Assume your users will watch *exactly* two movies.
- Don't make your users watch the same movie twice.
- Optimize for runtime over memory.

## Breakdown
- The two movies length need to be equal to the `flight_length`.
    - This means that for a first movie given, we need a second one that is equal to first movie length - flight length.
- Need to check each movie and treat it like the first one, from that, check if theres another one that is equal to the operation.
- We could use two nested loops to check all of the elements or maybe implement a hash.
- Maybe implement it using sets.
    - Using a set to store all of the `movie_lengths`. The other one, with `first_movie_lengths`.