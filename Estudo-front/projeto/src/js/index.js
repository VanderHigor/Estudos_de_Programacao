const personagens = document.querySelectorAll('.personagem')

personagens.forEach((personagem) => {
    personagem.addEventListener('mouseenter', () => {
        const personagemSelecionado = document.querySelector('.jogador-1-selecionado');
        personagemSelecionado.classList.remove('jogador-1-selecionado');
        personagem.classList.add('jogador-1-selecionado');

        const idSelecionado = personagem.attributes.id.value;

        const imagemJogador1 = document.getElementById('jogador-1');
        imagemJogador1.src = `./src/imagens/${idSelecionado}.png`;

        const nomeJogador1 = document.getElementById('nome-jogador1');
        const nomeSelecionado = personagem.getAttribute('data-name');
        nomeJogador1.innerHTML = nomeSelecionado;
    });
});


