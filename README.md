# LeetCode Solutions

## **[2126. Destroying Asteroids](https://leetcode.com/problems/destroying-asteroids/description/)**
**Tags** : `Array`, `Sorting`, `Greedy`<br>
**Languages** : `C++`, `Python`<br>
**Difficulty** : `Medium`

## Recognition
- The problem can be solved by taking optimal decisions. Hence, greedy algorithms work here.
- Once a decision is made, it solves a smaller problem. Decisions are irreversible here.
- If sorting helps taking the decision, then sort the list or array.

## Core Idea
- As the planet can collide with asteroids in any arbitrary order, sort the asteroids list in ascending order.
- Then compare the smallest asteroid with the `accumulatedMass` of the planet.
- If the planet cannot destroy the smallest asteroid, it cannot destroy the asteroids that come after it.
- At any moment, if the `accumulatedMass < asteroid` turns out to be `true`, return `false` immediately.

## Complexity
- **Time Complexity** : `O(nlogn)` for sorting the list
- **Space Complexity** : `O(1)` as the sorting is an in-place sorting