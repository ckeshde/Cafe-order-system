# Cafe Order Management System

This repository contains the implementation of a **Cafe Order Management System** as part of a university assignment.

## Overview

The system simulates the interaction between a **Patron**, **Host**, **Manager**, **FoodMaker**, and **CoffeeMaker** within a café environment. The Patron orders food and/or drinks, which are processed by the Host and managed by the Manager. The FoodMaker and CoffeeMaker are responsible for creating the food and coffee items. Once the items are ready, they are delivered to the Patron.

## Key Components

- **Host** (Façade Pattern): Presents the user interface and manages interactions.
- **Manager** (Mediator Pattern): Facilitates communication between the Host, FoodMaker, and CoffeeMaker.
- **FoodMaker**: Creates food items (pre-packaged).
- **CoffeeMaker**: Creates coffee items, with options to customize types of coffee and add sugars.
- **Order**: A collection of food and drink items.
- **Food**: Represents pre-packaged food items.
- **Drink**: Represents coffee drinks (BlackCoffee and WhiteCoffee).

## Features

- Customizable Coffee options (BlackCoffee and WhiteCoffee).
- Extendable for future customizations (e.g., milk types for WhiteCoffee, or adding more drink options).

## University Assignment

This project is a university assignment designed to practice implementing design patterns such as **Façade** and **Mediator**. The system aims to simulate a simple café ordering process with basic customization features.

## Usage

To run the system, compile the C++ code and execute the program.

## File Structure

- `Host.h` / `Host.cpp`: Implementation of the Host class.
- `Manager.h` / `Manager.cpp`: Implementation of the Manager class.
- `FoodMaker.h` / `FoodMaker.cpp`: Implementation of the FoodMaker class.
- `CoffeeMaker.h` / `CoffeeMaker.cpp`: Implementation of the CoffeeMaker class.
- `Order.h` / `Order.cpp`: Implementation of the Order class.
- `Food.h` / `Food.cpp`: Implementation of the Food class.
- `Drink.h` / `Drink.cpp`: Implementation of the Drink class, with BlackCoffee and WhiteCoffee.

## License

This project is for academic purposes and is not licensed for commercial use.
