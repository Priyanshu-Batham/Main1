const block = document.querySelector(".block");
const fetchData = ()=>{
    fetch("https://priyanshubatham.pythonanywhere.com/")
    .then(Response=> Response.json())
    .then(data=> {
        const stringer = JSON.stringify(data);
        block.innerHTML= `" ${stringer}"`
        // console.log(data.Genesis_Block_Hash[1][0]);
    })
}
fetchData();