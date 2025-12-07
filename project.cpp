#include <iostream>
#include <string>
using namespace std;

int main() {
    string elements[] = {
"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine","Neon",
"Sodium","Magnesium","Aluminum","Silicon","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium",
"Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc",
"Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium",
"Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin",
"Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium",
"Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium",
"Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury",
"Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium",
"Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium",
"Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium",
"Roentgenium","Copernicium","Nihonium","Flerovium","Moscovium","Livermorium","Tennessine","Oganesson"
};

    string symbols[] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne","Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe","Cs", "Ba","La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "yb", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "TI","Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og" };
    int atomicNumber[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,111, 112, 113, 114, 115, 116, 117, 118  };
   	
   	float atomicMass[118] = {1.0080, 4.002602, 6.94, 9.0121831, 10.81, 12.011, 14.007, 15.999, 18.998403, 20.1797, 22.989769, 24.305, 26.981538, 28.085, 30.97376, 32.06, 35.45, 39.948, 39.0983, 40.078, 44.955908, 47.867, 50.9415, 51.9961, 54.938043, 55.845, 58.933194, 58.6934, 63.546, 65.38, 69.723, 72.63, 74.921595, 78.971, 79.904, 83.798, 85.4678, 87.62, 88.905838, 91.224, 92.90637, 95.95, 98, 101.07, 102.90550, 106.42, 107.8682, 112.414, 114.818, 118.710, 121.760, 127.60, 126.90447, 131.293, 132.90545, 137.327, 138.90547, 140.116, 140.90766, 144.242, 145, 150.36, 151.964, 157.25, 158.92535, 162.500, 164.93033, 167.259, 168.93422, 173.045, 174.9668, 178.49, 180.94788, 183.84, 186.207, 190.23, 192.217, 195.084, 196.96657, 200.592, 204.38, 207.2, 208.98040, 209, 210, 222, 223, 226,  227, 232.037, 231.03588, 238.0508, 237, 244, 243, 247, 247, 251, 252, 257, 258, 259, 262, 261, 268, 263, 264, 269, 268, 272, 285, 286, 289, 290, 293,  294, 294         
};
    string  group[] = {"1A","8A","1A","2A","3A","4A","5A","6A","7A","8A", "1A","2A","3A","4A","5A","6A","7A","8A", "1A","2A","3B","4B","5B","6B","7B","8B","8B","8B","1B","2B", "3A","4A","5A","6A","7A","8A", "1A","2A","3B","4B","5B","6B","7B","8B","8B","8B","1B","2B", "3A","4A","5A","6A","7A","8A", "1A","2A", "3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B",  "4B","5B","6B","7B","8B","8B","8B","1B","2B", "3A","4A","5A","6A","7A","8A", "3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B","3B",  "4B","5B","6B","7B","8B","8B","8B","1B","2B", "3A","4A","5A","6A","7A","8A","1A","2A"};
    int period[] = {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3,3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 ,4 ,4 ,4 ,4 , 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };
	string funFact[] = {
    "Hydrogen is the most abundant element in the universe.",
    "Helium is used in balloons because it is lighter than air.",
    "Lithium is used in rechargeable batteries.",
    "Beryllium is used in spacecraft material.",
    "Boron is used in bulletproof vests.",
    "Carbon is the basis of all known life.",
    "Nitrogen makes up 78% of Earth's atmosphere.",
    "Oxygen is essential for breathing.",
    "Fluorine is the most reactive element.",
    "Neon is used in bright advertising signs.",
    "Sodium reacts violently with water.",
    "Magnesium burns with a bright white flame.",
    "Aluminum is the most abundant metal on Earth.",
    "Silicon is used to make computer chips.",
    "Phosphorus glows in the dark.",
    "Sulfur smells like rotten eggs.",
    "Chlorine is used to disinfect water.",
    "Argon is used in light bulbs.",
    "Potassium is essential for nerve function.",
    "Calcium strengthens bones and teeth.",
    "Scandium is used in aerospace parts.",
    "Titanium is stronger than steel but lighter.",
    "Vanadium is used in strong alloys.",
    "Chromium gives metal a shiny finish.",
    "Manganese is used in steel production.",
    "Iron is the main component of blood.",
    "Cobalt is used in blue pigments.",
    "Nickel is used in coins.",
    "Copper is an excellent conductor of electricity.",
    "Zinc is used to galvanize metals.",
    "Gallium melts in your hand.",
    "Germanium is used in electronics.",
    "Arsenic was once used in poisons.",
    "Selenium is used in solar panels.",
    "Bromine is a red-colored liquid.",
    "Krypton is used in flash lamps.",
    "Rubidium is highly reactive.",
    "Strontium is used in fireworks.",
    "Yttrium is used in LEDs.",
    "Zirconium is used in nuclear reactors.",
    "Niobium is used in superconductors.",
    "Molybdenum strengthens steel.",
    "Technetium is radioactive and used in medicine.",
    "Ruthenium is used in electrical contacts.",
    "Rhodium is extremely rare.",
    "Palladium is used in catalytic converters.",
    "Silver has the highest electrical conductivity.",
    "Cadmium is used in batteries.",
    "Indium is used in touchscreens.",
    "Tin prevents corrosion.",
    "Antimony is used in fireproofing.",
    "Tellurium is used in semiconductors.",
    "Iodine is essential for the thyroid.",
    "Xenon is used in bright headlights.",
    "Cesium is used in atomic clocks.",
    "Barium is used in medical imaging.",
    "Lanthanum is used in camera lenses.",
    "Cerium is used in lighter flints.",
    "Praseodymium is used in magnets.",
    "Neodymium is used in strong magnets.",
    "Promethium is radioactive.",
    "Samarium is used in magnets.",
    "Europium is used in TV screens.",
    "Gadolinium is used in MRI machines.",
    "Terbium is used in green phosphors.",
    "Dysprosium is used in laser materials.",
    "Holmium has the highest magnetic strength.",
    "Erbium is used in fiber optics.",
    "Thulium is very rare.",
    "Ytterbium is used in stainless steel.",
    "Lutetium is the densest lanthanide.",
    "Hafnium is used in nuclear control rods.",
    "Tantalum is used in phone capacitors.",
    "Tungsten has the highest melting point.",
    "Rhenium is extremely rare.",
    "Osmium is the densest natural element.",
    "Iridium is very corrosion resistant.",
    "Platinum is used in jewelry and catalysts.",
    "Gold is extremely non-reactive.",
    "Mercury is the only liquid metal at room temperature.",
    "Thallium was used in rat poison.",
    "Lead was used in old pipes.",
    "Bismuth has low toxicity.",
    "Polonium is dangerously radioactive.",
    "Astatine is extremely rare.",
    "Radon is a radioactive gas.",
    "Francium is the rarest natural element.",
    "Radium glows in the dark.",
    "Actinium is highly radioactive.",
    "Thorium can be used as nuclear fuel.",
    "Protactinium is very rare.",
    "Uranium powers nuclear plants.",
    "Neptunium is synthetic and radioactive.",
    "Plutonium is used in nuclear weapons.",
    "Americium is in smoke detectors.",
    "Curium glows red in the dark.",
    "Berkelium is named after Berkeley.",
    "Californium is extremely radioactive.",
    "Einsteinium is named after Einstein.",
    "Fermium is named after Fermi.",
    "Mendelevium is named after Mendeleev.",
    "Nobelium is named after Alfred Nobel.",
    "Lawrencium is named after Ernest Lawrence.",
    "Rutherfordium is named after Rutherford.",
    "Dubnium is named after Dubna, Russia.",
    "Seaborgium is named after Glenn Seaborg.",
    "Bohrium is named after Niels Bohr.",
    "Hassium is named after Hessen, Germany.",
    "Meitnerium is named after Lise Meitner.",
    "Darmstadtium is named after Darmstadt.",
    "Roentgenium is named after Wilhelm Röntgen.",
    "Copernicium is named after Copernicus.",
    "Nihonium means 'Japan'.",
    "Flerovium is named after Flerov Laboratory.",
    "Moscovium is named after Moscow.",
    "Livermorium is named after Livermore Lab.",
    "Tennessine is named after Tennessee.",
    "Oganesson is named after Yuri Oganessian."
    };
		string category[] = {
"Non-metal","Noble Gas","Alkali Metal","Alkaline Earth Metal","Metalloid","Non-metal",
"Non-metal","Non-metal","Halogen","Noble Gas",
"Alkali Metal","Alkaline Earth Metal","Post-Transition Metal","Metalloid","Non-metal","Non-metal","Halogen","Noble Gas",
"Alkali Metal","Alkaline Earth Metal",
"Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal",
"Post-Transition Metal","Metalloid","Metalloid","Non-metal","Halogen","Noble Gas",
"Alkali Metal","Alkaline Earth Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal",
"Post-Transition Metal","Post-Transition Metal","Metalloid","Metalloid","Halogen","Noble Gas",
"Alkali Metal","Alkaline Earth Metal",
"Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide","Lanthanide",
"Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal",
"Post-Transition Metal","Post-Transition Metal","Post-Transition Metal","Metalloid","Halogen","Noble Gas",
"Alkali Metal","Alkaline Earth Metal",
"Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide","Actinide",
"Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal","Transition Metal",
"Post-Transition Metal","Post-Transition Metal","Post-Transition Metal","Post-Transition Metal","Post-Transition Metal","Post-Transition Metal","Halogen","Noble Gas"
};

	int choice;
cout << "==========================\n";
cout << "     PERIODIC TABLE MENU  \n";
cout << "==========================\n";
cout << "1. Search by Name\n";
	

    string input;
    cout << "Enter Element Name: ";
    cin >> input;
    input[0] = toupper(input[0]);
for(int i = 1; i < input.length(); i++) {
    input[i] = tolower(input[i]);
}

    bool found = false;
    for(int i = 0; i < 118; i++) { // loop through arrays
        if(input == elements[i]) {
        	cout << "\n========= RESULT =========\n";
            cout << "Element: " << elements[i] << endl;
            cout << "Symbol: " << symbols[i] << endl;
            cout << "Atomic Number: " << atomicNumber[i] << endl;
            cout << "Atmic Mass: " << atomicMass[i] <<endl;
			cout << "Group: " << group[i] << endl;
            cout << "Period: " << period[i] << endl;
            cout << "Category: " << category[i] << endl;
            cout << "Fun Fact: " << funFact[i] << endl;
             cout << "==========================\n";
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element not found!" << endl;
    }

    return 0;
}
