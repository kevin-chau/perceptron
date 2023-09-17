// A simple single perceptron
// http://neuralnetworksanddeeplearning.com/chap1.html
#include <stdio.h>
#include <assert.h>

// Three input decision perceptron to decide if you want to go to the cheese
// festival. Weighted. Binary inputs and output.
int cheeseFestivalPerceptron(int isWeatherGood, int isPartnerAccompanying,
                             int isPublicTransitNear, int threshold)
{
    int w1 = 6; // Weather weight
    int w2 = 2; // partner weight
    int w3 = 2; // transit weight

    if ((w1*isWeatherGood+w2*isPartnerAccompanying+w3*isPublicTransitNear) > threshold)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int weather = 0;
    int partner = 0;
    int transit = 0;
    int threshold = 0;
    int go = 0;

    printf("Weather, Partner, Transit (inputs)\n");

    threshold = 5;
    printf("Threshold: %i\n", threshold);

    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 0);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);

    weather = 1;
    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 1);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);

    weather = 0;
    partner = 1;
    transit = 1;
    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 0);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);

    // Change threshold to 3
    threshold = 3;
    printf("Threshold: %i\n", threshold);

    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 1);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);

    weather = 1;
    partner = 0;
    transit = 0;
    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 1);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);

    weather = 0;
    partner = 0;
    transit = 0;
    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 0);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);

    weather = 1;
    partner = 1;
    transit = 1;
    go = cheeseFestivalPerceptron(weather, partner, transit, threshold);
    assert(go == 1);
    printf("%i, %i, %i => %i\n", weather, partner, transit, go);
    
    return 0;
}