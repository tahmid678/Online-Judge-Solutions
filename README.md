# LeetCode Solutions

<img src="./__/images/50 Days Badge 2024.gif" width="250" alt="50 Days Badge - 2024"><img src="./__/images/100 Days Badge 2024.gif" width="250" alt="100 Days Badge - 2024"><img src="./__/images/50 Days Badge 2025.gif" width="250" alt="50 Days Badge - 2025"><img src="./__/images/100 Days Badge 2025.gif" width="250" alt="100 Days Badge - 2025">

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

<!------------------------------------------------------------------------------------------------------------------------------->

## **[881. Boats to Save People](https://leetcode.com/problems/boats-to-save-people/description/)**

**Tags** : `Array`, `Two Pointers`, `Greedy`, `Sorting`<br>
**Languages** : `C++`, `Python`<br>
**Difficulty** : `Medium`

## Recognition
- Each boat can carry at most two people. So, heaviest remaining person must be handled in every step.
- Sorting helps to take the decision. So, sort the list or array.

## Idea
- As a boat can carry at most two people within the `limit`, sort the list in ascending order to best utilize this condition.
- Try to pairing up a couple containing the `heaviest` remaining person with the `lightest` remaining person.
- To track the `lightest` and the `heaviest` person, initialize two pointers `i` to `0` and `j` to `last index` of the list.
- Always check for whether the condition `people[i] + people[j] <= limit` satisfy. If so, then increment the starting index `i++`, otherwise it is not possible for pairing up a couple as any person comes after `people[i]` would weigh at least `people[i]`. In that case, only `people[j]` goes into the boat. In either case, the end index gets decremented `j--` and boats number `minimumBoats++` incremented.
- If there remains a single person, in other words `i == j`, return `minimumBoats + 1`, otherwise return `minimumBoats`.

## Complexity
**Time Complexity** : `O(nlogn)` as sorting required<br>
**Space Complexity** : `O(1)` as the sorting is in-place sorting