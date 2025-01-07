
let revHeader = document.getElementById("review-heading")

function updatePage() {
    
    revHeader.innerHTML = localStorage.getItem('language') + " Review"
}