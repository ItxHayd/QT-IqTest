#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QString>
#include <QVector>


using namespace std;

struct Question {
    QString question;
    QString options[4];
    char correctAnswer;
};



QVector<Question> questions;

void initializeQuestions() {
    questions.clear();

    questions.append({"What is the capital of France?",
                         {"A) London", "B) Berlin", "C) Paris", "D) Madrid"}, 'C'});

    questions.append({"Which planet is known as the Red Planet?",
                         {"A) Venus", "B) Mars", "C) Jupiter", "D) Saturn"}, 'B'});

    questions.append({"Who wrote 'Romeo and Juliet'?",
                         {"A) Charles Dickens", "B) William Shakespeare",
                          "C) Mark Twain", "D) Jane Austen"}, 'B'});

    questions.append({"What is the largest ocean on Earth?",
                         {"A) Atlantic Ocean", "B) Indian Ocean",
                          "C) Arctic Ocean", "D) Pacific Ocean"}, 'D'});

    questions.append({"How many continents are there?",
                         {"A) 5", "B) 6", "C) 7", "D) 8"}, 'C'});



    questions.append({"If a doctor gives you 3 pills and tells you to take one every half hour, how long will they last?",
                         {"A) 1 hour", "B) 1.5 hours", "C) 2 hours", "D) 2.5 hours"}, 'A'});

    questions.append({"I speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I?",
                         {"A) Echo", "B) River", "C) Cloud", "D) Shadow"}, 'A'});

    questions.append({"What has keys but can't open locks?",
                         {"A) Map", "B) Piano", "C) Door", "D) Calculator"}, 'B'});

    questions.append({"What comes once in a minute, twice in a moment, but never in a thousand years?",
                         {"A) The letter 'V'", "B) The letter 'M'",
                          "C) The letter 'E'", "D) The letter 'O'"}, 'B'});

    questions.append({"What has a heart that doesn't beat?",
                         {"A) Artichoke", "B) Clock", "C) Book", "D) Stone"}, 'A'});



    questions.append({"Which is the only mammal that can't jump?",
                         {"A) Elephant", "B) Giraffes", "C) Whale", "D) Giraffe"}, 'A'});

    questions.append({"How many bones are there in the human body?",
                         {"A) 206", "B) 210", "C) 196", "D) 200"}, 'A'});

    questions.append({"What is the only letter that doesn't appear in any U.S. state name?",
                         {"A) Q", "B) X", "C) Z", "D) J"}, 'A'});

    questions.append({"Which animal never sleeps?",
                         {"A) Shark", "B) Dolphin", "C) Bullfrog", "D) Butterfly"}, 'C'});

    questions.append({"What is the fear of long words called?",
                         {"A) Hippopotomonstrosesquippedaliophobia", "B) Arachnophobia",
                          "C) Claustrophobia", "D) Acrophobia"}, 'A'});

    questions.append({"Which animal can sleep with one eye open?",
                      {"A) Dolphin", "B) Cat", "C) Eagle", "D) Snake"}, 'A'});

    questions.append({" What is the only food that never expires?",
                      {"A) Rice", "B) Sugar", "C) Honey", "D) Salt"}, 'C'});

    questions.append({"Which language is primarily used for Android development?",
                      {"A) Python", "B) Swift", "C) Java", "D) C#"}, 'C'});

    questions.append({"What comes next in the series: 2, 6, 12, 20, ?",
                      {"A) 24", "B) 30", "C) 28", "D) 32"}, 'B'});

    questions.append({" What is the capital of Australia?",
                      {"A) Sydney", "B) Melbourne", "C) Canberra", "D) Perth"}, 'C'});

    questions.append({"If ALL BLOOMS are FLOWERS and SOME FLOWERS fade, which statement is true?",
                      {"A) All blooms fade", "B) Some blooms fade", "C) No blooms fade", "D) Cannot be determined"}, 'D'});

    questions.append({"A man is facing north. He turns 90° right, then 180° left. Which direction is he facing now?",
                      {"A) North", "B) South", "C) East", "D) West"}, 'D'});

    questions.append({"Which country has the most pyramids in the world?",
                      {"A) Egypt", "B) Mexico", "C) Peru", "D) Sudan"}, 'D'});

    questions.append({" Which country won the FIFA World Cup in 2018?",
                      {"A) Brazil", "B) Germany", "C) Argentina", "D) France"}, 'D'});




}



#endif // QUESTIONS_H
