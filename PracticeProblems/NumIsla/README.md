# 200. Number of Islands
---
### Problem Description:

You are given a 2D grid of size m x n where each cell contains either '1'
(representing land) or '0' (representing water). Your task is to count the total
number of islands in this grid.

An island is defined as a group of adjacent land cells ('1's) that are connected
horizontally or vertically. Diagonal connections don't count - only cells that
share an edge are considered connected. Each island is completely surrounded by
water ('0's).

The entire grid is surrounded by water on all four edges (you can assume there's
water beyond the grid boundaries).

For example, if you have a grid like:

1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1
This grid contains 3 islands:

Island 1: The connected '1's in the top-left corner (2x2 block)
Island 2: The single '1' in the middle
Island 3: The two connected '1's in the bottom-right
---
For this solution, I will first parse the input grid as a text file,
with each cell separated by 1 space and each row on a different line, before
calling the function.
**No AI is used, as this is for growth-learning. AI can make subtle mistakes and I
do not have the experience yet to confidently find them all. I cannot always
rely on AI as a crutch.**
