<!DOCTYPE html>
<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Atlantis Knights - WILDUNK</title>
    <!-- Collegamento a Font Awesome per le icone social -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">
    <!-- Collegamento a Google Fonts: Montserrat -->
    <link href="https://fonts.googleapis.com/css2?family=Montserrat:wght@400;700&display=swap" rel="stylesheet">
    <!-- Collegamento al tuo CSS principale -->
    <link rel="stylesheet" href="style.css">
    <style>
        /* Stili specifici per la pagina della squadra */
        body {
            background-color: #1E0F3D; /* Viola/blu scuro come richiesto */
            color: white; /* Testo bianco */
            /* Aggiungi padding-top al body per la navbar fissa */
            padding-top: 60px; /* Altezza della navbar */
            min-height: calc(100vh - 60px); /* Assicura che il body sia alto almeno quanto la viewport meno la navbar */
            display: flex;
            flex-direction: column;
            align-items: center; /* Centra il contenuto orizzontalmente */
        }

        .team-content {
            text-align: center; /* Centra testo e immagini all'interno */
            padding: 30px 20px;
            max-width: 700px; /* Larghezza massima per il contenuto per una migliore leggibilità */
            margin: 20px auto; /* Margine per distanziare dai bordi e centrare */
            box-sizing: border-box; /* Include padding nel width */
        }

        .team-content h1 {
            text-transform: uppercase; /* Nome della squadra in maiuscolo */
            font-size: 2.8em; /* Dimensione del font più grande */
            margin-bottom: 25px;
            font-weight: 700; /* Grassetto per il nome della squadra */
            line-height: 1.2;
        }

        .team-content img {
            max-width: 200px; /* Dimensione del logo della squadra */
            height: auto;
            margin-bottom: 30px;
            display: block; /* Per centrare l'immagine con margin: auto */
            margin-left: auto;
            margin-right: auto;
        }

        .team-content p {
            font-size: 1.1em; /* Dimensione della descrizione */
            line-height: 1.8; /* Altezza della riga per una migliore leggibilità */
            text-align: justify; /* Testo giustificato per un look pulito */
            margin-bottom: 20px;
        }

        /* Stili per il footer: assicurati che sia sempre in fondo */
        .site-footer {
            margin-top: auto; /* Spinge il footer in fondo alla pagina */
        }
    </style>
</head>
<body>
    <!-- Includi la navbar completa -->
    <nav class="navbar">
        <div class="navbar-logo">
            <!-- Assicurati che il percorso del logo sia corretto dalla pagina della squadra -->
            <a href="index.html"><img src="img/logo.png" alt="WILDUNK Logo"></a>
        </div>
        <div class="hamburger-icon" onclick="toggleMenu()">☰</div>
    </nav>
    <div class="menu" id="sideMenu">
        <ul>
            <!-- Ripeti qui l'intera lista delle squadre con i link aggiornati -->
            <li><a href="atlantis-knights.html"><img src="squadre/1-atlantis-knights.png" alt="Atlantis Knights Logo"><span>Atlantis Knights</span></a></li>
            <li><a href="savage-ape.html"><img src="squadre/2-savage-ape.png" alt="Savage Ape Logo"><span>Savage Ape</span></a></li>
            <li><a href="jurassic-stars.html"><img src="squadre/3-jurassic-stars.png" alt="Jurassic Stars Logo"><span>Jurassic Stars</span></a></li>
            <li><a href="madogs.html"><img src="squadre/4-madogs.png" alt="Madogs Logo"><span>Madogs</span></a></li>
            <li><a href="red-neck.html"><img src="squadre/5-red-neck.png" alt="Red-Neck Logo"><span>Red-Neck</span></a></li>
            <li><a href="patriots.html"><img src="squadre/6-patriots.png" alt="Patriots Logo"><span>Patriots</span></a></li>
            <li><a href="savana-clippers.html"><img src="squadre/7-savana-clippers.png" alt="Savana Clippers Logo"><span>Savana Clippers</span></a></li>
            <li><a href="golden.html"><img src="squadre/8-golden.png" alt="Golden Logo"><span>Golden</span></a></li>
            <li><a href="northern.html"><img src="squadre/9-northern.png" alt="Northern Logo"><span>Northern</span></a></li>
            <li><a href="aussie.html"><img src="squadre/10-aussie.png" alt="Aussie Logo"><span>Aussie</span></a></li>
        </ul>
    </div>

    <main class="team-content">
        <h1>ATLANTIS KNIGHTS</h1>
        <img src="squadre/1-atlantis-knights.png" alt="Atlantis Knights Logo">
        <p>Gli Atlantis Knights sono una squadra leggendaria, emersa dalle profondità oceaniche. Noti per la loro strategia impeccabile e la loro capacità di adattarsi a qualsiasi condizione, sono un avversario temibile sul campo da gioco. La loro forza risiede nella coesione e nella misteriosa energia che li lega al loro elemento nativo, rendendoli maestri delle manovre inaspettate e delle difese impenetrabili. La loro storia è intrisa di vittorie epiche e di un impegno inarrestabile verso l'eccellenza.</p>
    </main>

    <!-- Includi il footer completo -->
    <footer class="site-footer">
        <div class="footer-content">
            <div class="social-links">
                <a href="https://www.youtube.com/yourchannel" target="_blank" aria-label="YouTube"><i class="fab fa-youtube"></i></a>
                <a href="https://www.instagram.com/yourprofile" target="_blank" aria-label="Instagram"><i class="fab fa-instagram"></i></a>
                <a href="https://twitter.com/yourprofile" target="_blank" aria-label="X (Twitter)"><i class="fab fa-x-twitter"></i></a>
                <a href="https://discord.gg/yourserver" target="_blank" aria-label="Discord"><i class="fab fa-discord"></i></a>
                <a href="https://t.me/yourchannel" target="_blank" aria-label="Telegram"><i class="fab fa-telegram-plane"></i></a>
            </div>
            <p class="copyright-text">© 2023 WILDUNK. Tutti i diritti riservati.</p>
        </div>
    </footer>

    <script>
        // Lo script per il menu deve essere presente in ogni pagina che lo usa
        function toggleMenu() {
            var menu = document.getElementById('sideMenu');
            menu.classList.toggle('active');
        }
    </script>
</body>
</html>