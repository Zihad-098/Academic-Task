let questions = [
    {
        question: "Which language is used in web development ?",
        answers:[
            "pyhton",
            "C",
            "java",
            "javaScript"
        ],
        correct: "javaScript"
    },
     {
        question: "Which language is used in web development",
        answers:[
            "pyhton",
            "C",
            "java",
            "javaScript"
        ],
        correct: "javaScript"
    },
     {
        question: "Which language is used in web development",
        answers:[
            "pyhton",
            "C",
            "java",
            "javaScript"
        ],
        correct: "javaScript"
    },
     {
        question: "Which language is used in web development",
        answers:[
            "pyhton",
            "C",
            "java",
            "javaScript"
        ],
        correct: "javaScript"
    },
     {
        question: "Which language is used in web development",
        answers:[
            "pyhton",
            "C",
            "java",
            "javaScript"
        ],
        correct: "javaScript"
    },
]
// console.log(questions[0].answers[2])

let currentQuestionIndex = 0 
let score = 0

let questionElement = document.getElementById("question")
let questionNumberElement = document.getElementById("question-number")

let answerContainer = document.getElementById("answer-container")

let feedbackElement = document.getElementById("feedback")

let nextButton = document.getElementById("nxt-btn")
let restartButton = document.getElementById ("restart-btn")

let scoreElement = document.getElementById("score")

function showQuestion () {
    let currentQuestion = questions[currentQuestionIndex];
    questionNumberElement.textContent = "Question" + (currentQuestionIndex+1) + " of " + questions.length

    questionElement.textContent = currentQuestion.question

    answerContainer.innerHTML = ""

    
}


showQuestion() 

