#  Forged on Fire 

**Forged on Fire** is a console-based crafting simulation game written in C++. The player selects a material and weapon type to forge a custom weapon. The game calculates the resulting weapon's damage and durability based on the material's properties and weapon's base multiplier.

---

##  Features

-  **Interactive Console Menu**  
  Choose from 4 materials and 6 weapon types with colorful terminal output for better UX.

-  **Dynamic Weapon Crafting**  
  Forge weapons using different materials and view calculated stats like damage and durability.

-  **Repeat Gameplay Loop**  
  Allows players to continue crafting without restarting the program.

-  **Polymorphic and Extensible Design**  
  Easily add new weapon or material types thanks to object-oriented design and use of abstract classes.

---

##  How It Works

1. The player is prompted to select a material (`Diamond`, `Gold`, `Iron`, `Wood`).
2. The player then chooses a weapon type (`Sword`, `Spear`, `Axe`, `Claymore`, `Ninjato`, `Katana`).
3. A weapon is crafted with the selected material.
4. The game calculates:
   - **Total Damage** = `Material Damage × Weapon Multiplier`
   - **Total Durability** = `Material Durability`
5. Weapon stats are displayed.
6. The player can choose to forge another weapon or exit.

---

##  Object-Oriented Design (OOD)

This project demonstrates clean and modular **Object-Oriented Design** using:

###  Abstraction
- `Material` and `Weapon` are abstract base classes that define interfaces for concrete subclasses.

###  Inheritance
- Concrete material classes like `Diamond`, `Gold`, etc., inherit from `Material`.
- Weapon types like `Sword`, `Axe`, etc., inherit from `Weapon`.

###  Polymorphism
- Polymorphic behavior allows weapons and materials to be handled via base class pointers.

###  Encapsulation
- Implementation details of `Material` and `Weapon` are hidden, exposing only relevant interfaces.

---

##  Design Patterns Used

###  Factory Pattern (Simplified)
The functions `ChooseMaterial()` and `ChooseWeapon()` serve as **factory methods**. They return specific subclasses of `Material` and `Weapon` based on user input.

###  Strategy Pattern (Implicit)
The behavior of damage calculation is influenced by the composition of material with weapon type—each material acts like a strategy that changes the outcome of the calculation.

---

##  SOLID Principles Applied

- **S – Single Responsibility Principle**  
  Each class and function has a single, well-defined purpose.

- **O – Open/Closed Principle**  
  You can add new materials or weapons without modifying existing classes—just extend!

- **L – Liskov Substitution Principle**  
  Any subclass of `Material` or `Weapon` can be substituted where a base class is expected.

- **I – Interface Segregation Principle**  
  Though not applicable in a strict sense due to C++'s structure, interfaces are minimal and purpose-driven.

- **D – Dependency Inversion Principle**  
  High-level `Weapon` class depends on the abstract `Material` interface, not on concrete implementations.

---

##  Extending the Game

Want to add a new weapon or material?

1. **Add a new Material:**
   - Inherit from `Material`.
   - Implement `matName()`, `matDmg()`, and `matDur()`.

2. **Add a new Weapon:**
   - Inherit from `Weapon`.
   - Call the base constructor with a desired multiplier.
   - Implement `wepName()`.

3. **Update the factory methods:**
   - Modify `ChooseMaterial()` or `ChooseWeapon()`.

---

##  Testing

Google Test is integrated for unit testing materials and weapon output.  
Ensure correctness by testing all material stats and weapon calculations.

---

##  Dependencies

- Standard C++ Library
- ANSI Escape Codes (for terminal color formatting)

---

##  Sample Output

-----FORGED ON FIRE-----

Materials:
1. Diamond
2. Gold
3. Iron
4. Wood
Choose Material (1-4): 1

Weapons:
1. Sword
2. Spear
3. Axe
4. Claymore
5. Ninjato
6. Katana
Choose a Weapon (1-6): 4

Weapon Crafted:
Material Used: Diamond
Weapon Type: Claymore
Damage: 162
Durability: 100
