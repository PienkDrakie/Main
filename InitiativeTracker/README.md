## Initiative Tracker

This application is meant to be used by the GM (Game Master) during combat in a TTRPG (Table-Top Roleplaying Game). It will be built with the game system Pathfinder: 2nd Edition in mind. During combat, the GM usually needs to manage multiple "monsters", and each monster can have some of the following properties:

- `HP (Health Points)`: A positive number representing how close it is to dying, with 0 being dead.
- `AC (Armour Class)`: A number representing how difficult it is to hit; be it armoured or dexterous.
- `Conditions`: Effects that change a monster's state and can influence statistics.
> For example, the condition `Off-Guard` imparts a -2 penalty to its AC.
- `Persistent Effects`: Temporary effects that can deal damage before having a chance to be removed.
> Examples include being on fire, aka taking 1d6 persistent fire damage (1 six-sided dice roll worth of damage)

And other things, including abilities that can only be used once/every 1d4 rounds/every round. All of this needs to be tracked, and details can slip through the cracks. I will be using AI assistance as little as possible, since the secondary point of this exercise is to learn. I will reference any extra material used.


#### References

- `https://code.makery.ch/library/javafx-tutorial/part1/`: To get started.