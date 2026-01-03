//  Euclidean_Sequencer
//
//  Created by Matt Temperley on 03/01/2026.
//

#include "../JuceLibraryCode/JuceHeader.h"
#include "../EuclideanGenerator.h"

class EuclideanGeneratorTests : public juce::UnitTest
{
public:
    EuclideanGeneratorTests()
        : UnitTest("Euclidean Generator Tests", "Algorithms")
    {}
//
//    void runTest() override
//    {
//        beginTest("Zero pulses returns empty pattern");
//        {
//            EuclideanGenerator gen;
//            auto pattern = gen.generate(8, 0);
//            expect(pattern.size() == 8);
//            expect(std::count(pattern.begin(), pattern.end(), true) == 0);
//        }
//
//        
