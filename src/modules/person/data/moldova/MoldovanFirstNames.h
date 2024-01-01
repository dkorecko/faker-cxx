#pragma once

#include <string>
#include <vector>

namespace faker
{
const std::vector<std::string> moldovanMalesFirstNames = {
    "Ion",        "Vasile",    "Mihail",     "Ivan",      "Gheorghe",   "Vladimir",   "Victor",     "Nicolae",
    "Andrei",     "Petru",     "Alexandru",  "Serghei",   "Valeriu",    "Constantin", "Nicolai",    "Sergiu",
    "Igor",       "Anatolie",  "Dumitru",    "Grigore",   "Iurie",      "Oleg",       "Pavel",      "Tudor",
    "Alexei",     "Alexandr",  "Fiodor",     "Veaceslav", "Vasili",     "Vitalie",    "Valentin",   "Boris",
    "Piotr",      "Sergey",    "Aleksandr",  "Dmitriy",   "Leonid",     "Stefan",     "Dmitri",     "Andrey",
    "Vadim",      "Ilie",      "Stepan",     "Anatoli",   "Simion",     "Ghenadie",   "Roman",      "Viorel",
    "Ruslan",     "Alexander", "Nikolay",    "Mikhail",   "Stanislav",  "Eugeniu",    "Maxim",      "Viktor",
    "Eduard",     "Anton",     "Mihai",      "Iuri",      "Grigori",    "Anatolii",   "Valerii",    "Maksim",
    "Marin",      "Vladislav", "Evgeniy",    "Radu",      "Iurii",      "Vitali",     "Teodor",     "Iacob",
    "Adrian",     "Aurel",     "Artur",      "Yuriy",     "Vitaliy",    "Petr",       "Valeriy",    "Timofei",
    "Dmitry",     "Andrian",   "Feodor",     "Vitalii",   "Filip",      "Marcel",     "Aleksey",    "Dorin",
    "Konstantin", "Artyom",    "Anatoliy",   "Mircea",    "Evgeny",     "Valerian",   "Ilya",       "Gavril",
    "Eugen",      "Daniel",    "Iulian",     "Arcadie",   "Vyacheslav", "Octavian",   "Danil",      "Alexey",
    "Gennadiy",   "Vasily",    "Cristian",   "Vitaly",    "Cristi",     "David",      "Egor",       "Liviu",
    "Serafim",    "Iosif",     "Nicu",       "Yury",      "Ioan",       "Zaharia",    "Georgiy",    "Svyatoslav",
    "Sergei",     "Dinu",      "Emilian",    "Bogdan",    "Leon",       "Artem",      "Anatoly",    "Kirill",
    "Nichita",    "Spiridon",  "Sasa",       "Nicanor",   "Sandu",      "Dorel",      "Artiom",     "Corneliu",
    "Dionisie",   "Rodion",    "Catalin",    "Sorin",     "Luca",       "Ignat",      "Emil",       "Fedor",
    "Ilarion",    "Georgy",    "Daniil",     "Nikolai",   "Filipp",     "Nelu",       "Stelian",    "Cornel",
    "Demian",     "Albert",    "Trifon",     "Kristian",  "Isidor",     "Marius",     "Dionis",     "Iustin",
    "Grigory",    "Yaroslav",  "Damian",     "Zahari",    "Gicu",       "Vsevolod",   "Gleb",       "Lev",
    "Romeo",      "Filimon",   "Haralambie", "Iaroslav",  "Timur",      "Calin",      "Gherasim",   "Mark",
    "Ionel",      "Hristofor", "Dragos",     "Gabriel",   "Emanoil",    "Avram",      "Petrea",     "Timofey",
    "Arcadi",     "Efrem",     "Silviu",     "Aleks",     "Jan",        "Cristofor",  "Lazar",      "Miron",
    "George",     "Matei",     "Semen",      "Arkadiy",   "Costel",     "Robert",     "Sevastian",  "Florin",
    "Nistor",     "Toader",    "Elisei",     "Ian",       "Renat",      "Alin",       "Lucian",     "Vladimer",
    "Rostislav",  "Onisim",    "Marc",       "Dorian",    "Taras",      "Alex",       "John",       "Vlad",
    "Adam",       "Ciprian",   "Timotei",    "Nick",      "Virgiliu",   "Rustam",     "Marcu",      "Isai",
    "Miroslav",   "Kris",      "Dinis",      "Traian",    "Felix",      "Nazar",      "Kiril",      "Titu",
    "Alik",       "Ionut",     "Edgar",      "Orest",     "Ioachim",    "Laurentiu",  "Dimitri",    "German",
    "Martin",     "Alecu",     "Erik",       "Iu",        "Cezar",      "Yurii",      "Ianos",      "Ovidiu",
    "Augustin",   "Aurelian",  "Vergil",     "Angel",     "Cristin",    "Samoil",     "Isac",       "Marat",
    "Doru",       "Edward",    "Eric",       "Gelu",      "Arseniy",    "Iordan",     "Arseni",     "Matvey",
    "Peter",      "Silvian",   "Ali",        "Emanuil",   "Andrii",     "Arsen",      "Dimitrie",   "Eugene",
    "Edvard",     "Sergio",    "Leonard",    "Sebastian", "Ostap",      "Anastas",    "Anghel",     "Casian",
    "Aleksei",    "Philip",    "Virgil",     "Svetoslav", "Richard",    "Petro",      "Alecsandru", "Silvestru",
    "Alen",       "Dragomir",  "Cristea",    "Denys",     "Paul",       "Niko",       "Remus",      "Neculai",
    "Sam",        "Samson",    "Eldar",      "Ghiorghi",  "Andre",      "Armen",      "Chris",      "Arnold",
    "Nicolaie",   "Simon",     "Johny",      "Kalin",     "Rafael",     "Rudolf",     "Yanik",      "Murat",
    "Nestor",     "Samir",     "Gheorge",    "Achim",     "Zhan",       "Georgel",    "Sergej",     "Samuil",
    "Ramin",      "Adolf",     "Dimitry",    "Viktar",    "Dani",       "Nikolas",    "Georgi",     "Said",
    "Aron",       "Rinat",     "Tom",        "Alan",      "Alexandar",  "Sergiy",     "Gari",       "Marco",
    "Teo",        "Steven",    "Aleksander", "Serge",     "Damir",      "Dimitriy",   "Vasil",      "Gregory",
    "Raul",       "Ernest",    "Vadym",      "Jack",      "Mustafa",    "Akim",
};

const std::vector<std::string> moldovanFemalesFirstNames = {
    "Maria",      "Elena",     "Valentina",  "Tatiana",   "Olga",      "Natalia",    "Nina",        "Ana",
    "Svetlana",   "Vera",      "Galina",     "Lidia",     "Ecaterina", "Tamara",     "Irina",       "Nadejda",
    "Anna",       "Zinaida",   "Larisa",     "Alexandra", "Raisa",     "Ludmila",    "Eugenia",     "Liudmila",
    "Anastasia",  "Angela",    "Lilia",      "Iulia",     "Marina",    "Parascovia", "Aliona",      "Tatyana",
    "Natalya",    "Mariana",   "Ala",        "Liuba",     "Viorica",   "Victoria",   "Alina",       "Veronica",
    "Elizaveta",  "Diana",     "Silvia",     "Sofia",     "Ekaterina", "Denis",      "Cristina",    "Emilia",
    "Rodica",     "Oxana",     "Kristina",   "Valeri",    "Ioana",     "Evdochia",   "Eudochia",    "Anastasiya",
    "Vasilisa",   "Varvara",   "Claudia",    "Alla",      "Mariya",    "Lucia",      "Agafia",      "Domnica",
    "Antonina",   "Liubov",    "Lyudmila",   "Liliana",   "Ilia",      "Ina",        "Aurelia",     "Daria",
    "Inna",       "Olesea",    "Fedora",     "Nadezhda",  "Daniela",   "Axenia",     "Aurica",      "Mihaela",
    "Elisaveta",  "Inga",      "Valeria",    "Viktoriya", "Anya",      "Lilian",     "Margarita",   "Dina",
    "Alyona",     "Margareta", "Stela",      "Eleonora",  "Violeta",   "Darya",      "Nelea",       "Doina",
    "Nikita",     "Yuliya",    "Maia",       "Sasha",     "Yana",      "Olesya",     "Valeriya",    "Polina",
    "Dan",        "Viktoria",  "Aleksandra", "Kseniya",   "Zoia",      "Dorina",     "Taisia",      "Sava",
    "Adriana",    "Carolina",  "Alena",      "Lyubov",    "Yulia",     "Melania",    "Veronika",    "Corina",
    "Oksana",     "Marian",    "Elvira",     "Dana",      "Marianna",  "Karina",     "Teodora",     "Adela",
    "Vladislava", "Snejana",   "Xenia",      "Iuliana",   "Profira",   "Gabriela",   "Evgeniya",    "Iraida",
    "Alisa",      "Arina",     "Nicoleta",   "Ivanna",    "Rita",      "Iana",       "Mina",        "Marcela",
    "Catalina",   "Zhenya",    "Livia",      "Georgeta",  "Agripina",  "Uliana",     "Anzhela",     "Lina",
    "Anghelina",  "Jana",      "Andriana",   "Anisia",    "Albina",    "Karolina",   "Pavlina",     "Eva",
    "Stella",     "Aglaia",    "Adelina",    "Nika",      "Evgenia",   "Paulina",    "Lidiya",      "Laura",
    "Minodora",   "Dora",      "Felicia",    "Ivana",     "Nelli",     "Nataliya",   "Ksenia",      "Valery",
    "Evelina",    "Iustina",   "Natasa",     "Cornelia",  "Nikoleta",  "Angelina",   "Lora",        "Luminita",
    "Neli",       "Mila",      "Liliya",     "Ada",       "Renata",    "Rimma",      "Zina",        "Clara",
    "Sabina",     "Neonila",   "Vasilina",   "Alevtina",  "Mayya",     "Zhanna",     "Ionela",      "Tania",
    "Andreea",    "Anisoara",  "Snezhana",   "Lia",       "Vica",      "Ruslana",    "Roza",        "Sanda",
    "Taisa",      "Lucretia",  "Ilona",      "Hristina",  "Ira",       "Sanya",      "Toma",        "Leonora",
    "Gheorghina", "Lilya",     "Tina",       "Lida",      "Rima",      "Marta",      "Janna",       "Olimpia",
    "Nona",       "Violetta",  "Faina",      "Sorina",    "Sofiya",    "Danila",     "Alexandrina", "Tecla",
    "Greta",      "Dumitrita", "Virginia",   "Yan",       "Madalina",  "Nadia",      "Ariadna",     "Doinita",
    "Maryana",    "Nataly",    "Yulian",     "Rada",      "Anzhelika", "Gabi",       "Didina",      "Kira",
    "Teodosia",   "Angelica",  "Valerie",    "Leonida",   "Susana",    "Emma",       "Violina",     "Aneta",
    "Loredana",   "Mary",      "Regina",     "Luiza",     "Vania",     "Antonia",    "Lucica",      "Zoya",
    "Romina",     "Inesa",     "Florea",     "Elina",     "Cleopatra", "Inessa",     "Lolita",      "Yuliana",
    "Lenuta",     "Verginia",  "Anelia",     "Tudora",    "Sofya",     "Nelya",      "Lika",        "Sashka",
    "Nelly",      "Miroslava", "Silva",      "Katalina",  "Milena",    "Vitalina",   "Olivia",      "Niculina",
    "Marinela",   "Aurora",    "Zamfira",    "Mirela",    "Julia",     "Olesia",     "Magdalena",   "Rosina",
    "Paula",      "Magdalina", "Silviya",    "Steluta",   "Daniella",  "Stefana",    "Steliana",    "Maricica",
    "Reveca",     "Patricia",  "Asya",       "Katalin",   "Elmira",    "Lada",       "Florica",     "Malvina",
    "Constanta",  "Ulyana",    "Lili",       "Crina",     "Lana",      "Ninel",      "Olguta",      "Maya",
    "Darina",     "Reghina",   "Gaby",       "Floarea",   "Alexa",     "Anfisa",     "Stanislava",  "Ela",
    "Tamila",     "Ema",       "Mira",       "Vitalia",   "Estera",    "Iona",       "Camelia",     "Inka",
    "Vanda",      "Otilia",    "Sabrina",    "Sania",     "Janeta",    "Alvina",     "Erica",       "Rozalia",
    "Erika",      "Zlata",     "Angelika",   "Gabriella", "Antonela",  "Simona",
};

}
