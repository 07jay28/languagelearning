const languageChosen = document.getElementById("language")
const reviewBtn = document.getElementById('review')
const quizBtn = document.getElementById('quiz')

function getLanguage() {
    if(languageChosen.selectedIndex == languageChosen.disabled) {
        reviewBtn = reviewBtn.disabled
        quizBtn = quizBtn.disabled
    }
    else {
        return languageChosen.selectedIndex
    }
}

async function startQuiz(language) {
    localStorage.setItem('language', languageChosen.value)
    window.location.href = "quiz.html"
}

async function startReview(language) {
    localStorage.setItem('language', languageChosen.value)
    window.location.href = "review.html"
}
