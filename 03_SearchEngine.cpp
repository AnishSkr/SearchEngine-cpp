#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// search engine for search some predefined catageories -
// ask about search categeories

int main()
{

    char fieldinput;
    string fieldsearch;

    cout << "Welcome to Asking Search Engine!\nHere you can search about some popular categeories like: 'Birds', 'Vecheils' etc";
    // cout << "\nFirst Choose: Intrested Field ~\n\n";
    cout << "\nA) Birds - B) Cars - \n Ask whithin this fields\n\n: ";

    getline(cin, fieldsearch);

// birds

    if (fieldsearch == "How many type of birds are there")
    {
        cout << "Types of Birds: Birds are some of the most successful vertebrate animals on Earth. There are more than 9,000 bird species, and they are spread over the whole planet, from the poles to the equator - from across search result";
    }

    else if (fieldsearch == "which is the smallest bird in the world")
    {
        cout << "The Bee Hummingbird \n\n The Bee Hummingbird, which is found only in Cuba, is an absolute miniature, even among hummingbirds. It measures a mere two and a quarter inches long. Bee Hummingbirds are often mistaken for bees. They weigh less than two grams";
    }
    else if (fieldsearch == "Which bird flies longest distance in its lifetime")
    {
        cout << "This is the way of the Bar-tailed Godwit; from Alaska to New Zealand, it holds the record for the largest non-stop flight of any bird, flying for over 11,000 km (6,835 mi) without rest.";
    }
    else if (fieldsearch == "Which bird can see at night")
    {
        cout << "A night bird like owl has more rods compared to cones . also the bird has a large cornea and a large pupil to allow more light to enter its eye. the night are therefore able to see very well even during night. Was this answer helpful?";
    }
    else if (fieldsearch == "birds are")
    {
        cout << "Birds are vertebrates (animals with backbones) with wings and feathers. Most birds can fly, using powerful muscles to flap their wings. But a few bird species do not have strong enough wings to fly, and so these birds are flightless";
    }

    // cars


    else if (fieldsearch == "Which animal features in the logo for Lamborghini?")
    {
        cout << "bull \nLamborghini. Another horned animal, a strong bull, plays a front and center \nrole for this luxury car company. Founder Ferrucio Lamborghini was born \nunder the sign of Taurus (Latin for 'bull'), which explains why he found \nthis animal to be a fitting symbol for the speed and muscle of the \nLamborghini vehicles";
    }
    else if (fieldsearch == "Which iconic car manufacturer also made airplane engines")
    {
        cout << "Rolls-Royce \nRolls-Royce have been creating aircraft engines since 1914. And today the \nBritish company is the second largest manufacturer of aircraft engines. A \nrange of Rolls-Royce engines power many different types of aircraft, from \nmilitary planes to private jets, to airliners";
    }
    else if (fieldsearch == "What is the world's all-time best selling car")
    {
        cout << "The 11 best‑selling cars of all time \nFord Model T – 16.5 million. ... \nFord Fiesta – 16.5 million. ... \nLada 'Classic' – 17.750 million. ... \nVolkswagen Beetle – over 21 million. ... \nVolkswagen Passat – over 23 million. ... \nHonda Civic – over 24 million. ... \nVolkswagen Golf – over 35 million. ... \nFord F-Series – over 41 million.";
    }


    else
    {
        cout << "Sorry!, We can't find this answer on our server\nWe're improving everday - try another input";
    }
    cout<<"\n\nThank you we're improving everyday and adding new categeories! :)";

    // searchresults(fieldinput);

    return 0;
}