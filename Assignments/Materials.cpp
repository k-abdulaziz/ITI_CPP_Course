#include <iostream>
#include <string>

using namespace std;

class Material {
public:
    Material(const string& name, float density, const string& color)
        : name(name), density(density), color(color) {}

    // Getters
    string getName() const { return name; }
    float getDensity() const { return density; }
    string getColor() const { return color; }

    // Setters
    void setName(const string& name) { this->name = name; }
    void setDensity(float density) { this->density = density; }
    void setColor(const string& color) { this->color = color; }

private:
    string name;
    float density;
    string color;
};

class LivingThing : public Material {
public:
    LivingThing(const string& name, float density, const string& color,
                const string& species, const string& habitat, int lifespan, const string& reproductionType)
        : Material(name, density, color), species(species), habitat(habitat), lifespan(lifespan), reproductionType(reproductionType) {}

    // Getters
    string getSpecies() const { return species; }
    string getHabitat() const { return habitat; }
    int getLifespan() const { return lifespan; }
    string getReproductionType() const { return reproductionType; }

    // Setters
    void setSpecies(const string& species) { this->species = species; }
    void setHabitat(const string& habitat) { this->habitat = habitat; }
    void setLifespan(int lifespan) { this->lifespan = lifespan; }
    void setReproductionType(const string& reproductionType) { this->reproductionType = reproductionType; }

private:
    string species;
    string habitat;
    int lifespan;
    string reproductionType;
};

class NonLivingThing : public Material {
public:
    NonLivingThing(const string& name, float density, const string& color,
                   const string& state, float meltingPoint, float boilingPoint, float hardness)
        : Material(name, density, color), state(state), meltingPoint(meltingPoint), boilingPoint(boilingPoint), hardness(hardness) {}

    // Getters
    string getState() const { return state; }
    float getMeltingPoint() const { return meltingPoint; }
    float getBoilingPoint() const { return boilingPoint; }
    float getHardness() const { return hardness; }

    // Setters
    void setState(const string& state) { this->state = state; }
    void setMeltingPoint(float meltingPoint) { this->meltingPoint = meltingPoint; }
    void setBoilingPoint(float boilingPoint) { this->boilingPoint = boilingPoint; }
    void setHardness(float hardness) { this->hardness = hardness; }

private:
    string state;
    float meltingPoint;
    float boilingPoint;
    float hardness;
};

class Rock : public NonLivingThing {
public:
    Rock(const string& name, float density, const string& color,
         const string& state, float meltingPoint, float boilingPoint, float hardness,
         const string& rockType)
        : NonLivingThing(name, density, color, state, meltingPoint, boilingPoint, hardness), rockType(rockType) {}

    // Getter
    string getRockType() const { return rockType; }

    // Setter
    void setRockType(const string& rockType) { this->rockType = rockType; }

private:
    string rockType;
};

class Air : public NonLivingThing {
public:
    Air(const string& name, float density, const string& color,
        const string& state, float meltingPoint, float boilingPoint, float hardness,
        const string& composition, float humidity)
        : NonLivingThing(name, density, color, state, meltingPoint, boilingPoint, hardness), composition(composition), humidity(humidity) {}

    // Getters
    string getComposition() const { return composition; }
    float getHumidity() const { return humidity; }

    // Setters
    void setComposition(const string& composition) { this->composition = composition; }
    void setHumidity(float humidity) { this->humidity = humidity; }

private:
    string composition;
    float humidity;
};

class Plant : public LivingThing {
public:
    Plant(const string& name, float density, const string& color,
          const string& species, const string& habitat, int lifespan, const string& reproductionType,
          const string& plantType, float photosynthesisRate)
        : LivingThing(name, density, color, species, habitat, lifespan, reproductionType), plantType(plantType), photosynthesisRate(photosynthesisRate) {}

    // Getters
    string getPlantType() const { return plantType; }
    float getPhotosynthesisRate() const { return photosynthesisRate; }

    // Setters
    void setPlantType(const string& plantType) { this->plantType = plantType; }
    void setPhotosynthesisRate(float photosynthesisRate) { this->photosynthesisRate = photosynthesisRate; }

private:
    string plantType;
    float photosynthesisRate;
};

class Animal : public LivingThing {
public:
    Animal(const string& name, float density, const string& color,
           const string& species, const string& habitat, int lifespan, const string& reproductionType,
           const string& animalType, const string& locomotion)
        : LivingThing(name, density, color, species, habitat, lifespan, reproductionType), animalType(animalType), locomotion(locomotion) {}

    // Getters
    string getAnimalType() const { return animalType; }
    string getLocomotion() const { return locomotion; }

    // Setters
    void setAnimalType(const string& animalType) { this->animalType = animalType; }
    void setLocomotion(const string& locomotion) { this->locomotion = locomotion; }

private:
    string animalType;
    string locomotion;
};


class Reptile : public Animal {
public:
    Reptile(const string& name, float density, const string& color,
            const string& species, const string& habitat, int lifespan, const string& reproductionType,
            const string& animalType, const string& locomotion,
            bool coldBlooded, bool eggLaying)
        : Animal(name, density, color, species, habitat, lifespan, reproductionType, animalType, locomotion),
          coldBlooded(coldBlooded), eggLaying(eggLaying) {}

    // Getters
    bool isColdBlooded() const { return coldBlooded; }
    bool isEggLaying() const { return eggLaying; }

    // Setters
    void setColdBlooded(bool coldBlooded) { this->coldBlooded = coldBlooded; }
    void setEggLaying(bool eggLaying) { this->eggLaying = eggLaying; }

private:
    bool coldBlooded;
    bool eggLaying;
};

class Mammal : public Animal {
public:
    Mammal(const string& name, float density, const string& color,
           const string& species, const string& habitat, int lifespan, const string& reproductionType,
           const string& animalType, const string& locomotion,
           bool fur, bool warmBlooded)
        : Animal(name, density, color, species, habitat, lifespan, reproductionType, animalType, locomotion),
          fur(fur), warmBlooded(warmBlooded) {}

    // Getters
    bool hasFur() const { return fur; }
    bool isWarmBlooded() const { return warmBlooded; }

    // Setters
    void setFur(bool fur) { this->fur = fur; }
    void setWarmBlooded(bool warmBlooded) { this->warmBlooded = warmBlooded; }

private:
    bool fur;
    bool warmBlooded;
};

class HumanBeing {
public:
    HumanBeing(const string& name, float density, const string& color,
               const string& species, const string& habitat, int lifespan, const string& reproductionType,
               const string& occupation, bool fur, bool warmBlooded)
        : name(name), density(density), color(color), species(species), habitat(habitat), lifespan(lifespan),
          reproductionType(reproductionType), occupation(occupation), fur(fur), warmBlooded(warmBlooded) {}

    // Getters
    string getName() const { return name; }
    float getDensity() const { return density; }
    string getColor() const { return color; }
    string getSpecies() const { return species; }
    string getHabitat() const { return habitat; }
    int getLifespan() const { return lifespan; }
    string getReproductionType() const { return reproductionType; }
    string getOccupation() const { return occupation; }
    bool hasFur() const { return fur; }
    bool isWarmBlooded() const { return warmBlooded; }

    // Setters
    void setName(const string& name) { this->name = name; }
    void setDensity(float density) { this->density = density; }
    void setColor(const string& color) { this->color = color; }
    void setSpecies(const string& species) { this->species = species; }
    void setHabitat(const string& habitat) { this->habitat = habitat; }
    void setLifespan(int lifespan) { this->lifespan = lifespan; }
    void setReproductionType(const string& reproductionType) { this->reproductionType = reproductionType; }
    void setOccupation(const string& occupation) { this->occupation = occupation; }
    void setFur(bool fur) { this->fur = fur; }
    void setWarmBlooded(bool warmBlooded) { this->warmBlooded = warmBlooded; }

private:
    string name;
    float density;
    string color;
    string species;
    string habitat;
    int lifespan;
    string reproductionType;
    string occupation;
    bool fur;
    bool warmBlooded;
};

class Cat : public Mammal {
public:
    Cat(const string& name, float density, const string& color,
        const string& species, const string& habitat, int lifespan, const string& reproductionType,
        const string& breed, bool fur, bool warmBlooded)
        : Mammal(name, density, color, species, habitat, lifespan, reproductionType, "cat", "walking", fur, warmBlooded),
          breed(breed) {}

    // Getter
    string getBreed() const { return breed; }

    // Setter
    void setBreed(const string& breed) { this->breed = breed; }

private:
    string breed;
};

class Dog : public Mammal {
public:
    Dog(const string& name, float density, const string& color,
        const string& species, const string& habitat, int lifespan, const string& reproductionType,
        const string& breed, bool fur, bool warmBlooded)
        : Mammal(name, density, color, species, habitat, lifespan, reproductionType, "dog", "walking", fur, warmBlooded),
          breed(breed) {}

    // Getter
    string getBreed() const { return breed; }

    // Setter
    void setBreed(const string& breed) { this->breed = breed; }

private:
    string breed;
};

class Playtrus : public Mammal {
public:
    Playtrus(const string& name, float density, const string& color,
             const string& species, const string& habitat, int lifespan, const string& reproductionType,
             const string& colors, bool fur, bool warmBlooded)
        : Mammal(name, density, color, species, habitat, lifespan, reproductionType, "playtrus", "walking", fur, warmBlooded),
          color(color) {}

    // Getter
    string getColor() const { return color; }

    // Setter
    void setColor(const string& color) { this->color = color; }

private:
    string color;
};

class Dentist : public HumanBeing {
public:
    Dentist(const string& name, float density, const string& color,
            const string& species, const string& habitat, int lifespan, const string& reproductionType,
            const string& occupation, bool fur, bool warmBlooded,
            const string& specialty)
        : HumanBeing(name, density, color, species, habitat, lifespan, reproductionType, occupation, fur, warmBlooded),
          specialty(specialty) {}

    // Getter
    string getSpecialty() const { return specialty; }

    // Setter
    void setSpecialty(const string& specialty) { this->specialty = specialty; }

private:
    string specialty;
};

class Shopkeeper : public HumanBeing {
public:
    Shopkeeper(const string& name, float density, const string& color,
               const string& species, const string& habitat, int lifespan, const string& reproductionType,
               const string& occupation, bool fur, bool warmBlooded,
               const string& shopType)
        : HumanBeing(name, density, color, species, habitat, lifespan, reproductionType, occupation, fur, warmBlooded),
          shopType(shopType) {}

    // Getter
    string getShopType() const { return shopType; }

    // Setter
    void setShopType(const string& shopType) { this->shopType = shopType; }

private:
    string shopType;
};

class Artist : public HumanBeing {
public:
    Artist(const string& name, float density, const string& color,
           const string& species, const string& habitat, int lifespan, const string& reproductionType,
           const string& occupation, bool fur, bool warmBlooded,
           const string& artType)
        : HumanBeing(name, density, color, species, habitat, lifespan, reproductionType, occupation, fur, warmBlooded),
          artType(artType) {}

    // Getter
    string getArtType() const { return artType; }

    // Setter
    void setArtType(const string& artType) { this->artType = artType; }

private:
    string artType;
};


int main() {
    // a Dentist object
    Dentist dentist("John Doe", 1.05, "white", "Homo sapiens", "urban", 80, "sexual", "dentist", false, true, "orthodontics");
    cout << "Name: " << dentist.getName() << endl;
    cout << "Occupation: " << dentist.getOccupation() << endl;
    cout << "Specialty: " << dentist.getSpecialty() << endl;

    // Create a Shopkeeper object
    Shopkeeper shopkeeper("Jane Smith", 1.02, "brown", "Homo sapiens", "urban", 75, "sexual", "shopkeeper", false, true, "grocery");
    cout << "Name: " << shopkeeper.getName() << endl;
    cout << "Occupation: " << shopkeeper.getOccupation() << endl;
    cout << "Shop Type: " << shopkeeper.getShopType() << endl;

    // Create an Artist object
    Artist artist("Bob Ross", 1.01, "brown", "Homo sapiens", "rural", 70, "sexual", "artist", false, true, "painting");
    cout << "Name: " << artist.getName() << endl;
    cout << "Occupation: " << artist.getOccupation() << endl;
    cout << "Art Type: " << artist.getArtType() << endl;

    return 0;
}