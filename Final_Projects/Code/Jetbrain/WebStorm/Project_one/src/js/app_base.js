const btn_title = document.querySelector('h1');
const app = document.querySelector('main');



function clique() {

    const a = document.createElement('input');
    const b = document.createElement('input');

    a.type = 'text';
    a.placeholder = "Veuillez entrer un mots de passe !"

    b.type = 'submit';
    b.value = 'Confirmer';

    app.appendChild(a);
    app.appendChild(b);

    if (a.value === btn_title) {
        document.body.style.backgroundColor = '#000000';
    } else {
        console.log(btn_title.value);
        }

}
btn_title.addEventListener('click', clique);
