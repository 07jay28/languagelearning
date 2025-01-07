
let revHeader = document.getElementById("quiz-heading")

function updatePage() {
    
    revHeader.innerHTML = localStorage.getItem('language') + " Quiz"
}