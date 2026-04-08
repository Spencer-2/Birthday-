#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

void toLower(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
    char prenom[50];
    char couleur[50];
    char artiste[50];
    char reponse[10];
    int age;
    int score = 0;

    printf("✨ Bonjour ✨\n");
    printf("Si ce programme vous est parvenu, c'est probablement que vous êtes quelqu'une de spéciale.\n\n");
    printf("🔍 Vérification de l'identité en cours...\n");
    sleep(1);
    printf("📂 Chargement des informations...\n");
    sleep(2);
    printf("⏳ Accès initial en attente...\n\n");
    sleep(1);

    printf("\n📝 Veuillez entrer votre prénom :\n");
    scanf("%s", prenom);

    toLower(prenom);

    if(strcmp(prenom,"yasmina")==0 || strcmp(prenom,"anielle")==0) {
        printf("\n✅ Accès autorisé. Bienvenue %s.\n\n", prenom);
        sleep(1);

        do {
            printf("\n🎨 Question 1 : Quelle est ta couleur préférée ?\n");
            scanf("%s", couleur);
            toLower(couleur);

            if(strcmp(couleur,"violet")==0) {
                printf("\n🌈 Bonne réponse. Ce programme semble bien parler à la bonne personne.\n\n");
                score += 1;
            } else {
                printf("\n⚠️ Hmm... c'est suspect. Réessaie encore.\n\n");
            }
        } while(strcmp(couleur,"violet")!=0);
        sleep(2);

        do {
            printf("\n🎶 Question 2 : Quel est ton artiste préféré ?\n");
            scanf("%s", artiste);
            toLower(artiste);

            if(strcmp(artiste,"didi b")==0  || strcmp(artiste,"joe")==0  || strcmp(artiste,"himra")==0 || strcmp(artiste,"joe dwet file")==0) {
                printf("\n Faut croire que tu as décidément un très bon goût🎵.\n\n");
                score += 1;
            } else {
                printf("\n❌ Pas tout à fait... mais on te laisse une seconde chance.\n\n");
            }
        } while (strcmp(artiste, "didi b") != 0 &&
                 strcmp(artiste, "joe") != 0 &&
                 strcmp(artiste, "himra") != 0 &&
                 strcmp(artiste, "joe dwet file") != 0);
        sleep(2);

        printf("\n Question 3 : Quel âge viens-tu d'avoir aujourd'hui ?\n");
        scanf("%d", &age);

        if(age == 18) {
            printf("\n 18 ans ? Difficile à croire...\n");
            sleep(1);
            printf(" On dirait bien que la maturité était en avance chez toi.\n\n");
            score += 1;
        } else {
            printf("\nℹ️ Merci pour l'information.\n\n");
        }
        sleep(2);

        printf("\n Question 4 : Es-tu une femme claire ? (oui/non)\n");
        scanf("%s", reponse);
        toLower(reponse);

        if(strcmp(reponse,"oui")==0) {
            printf("\n On raconte que les femmes claires et sincères deviennent rares💎.\n");
            sleep(1);
            printf(" On m'a fait tes louanges comme quoi tu en fais partie...\n");
            sleep(1);
            printf(" Alors toutes nos félicitations🎊.\n\n");
        }
        sleep(2);

        printf("\n🔎 Analyse des réponses...\n");
        sleep(2);
        printf(" Compatibilité avec le programme : %d/3\n", score);
        sleep(1);

        if(score == 3) {
            printf("\n🌟 Wow ! On dirait que tu es vraiment la personne spéciale qu'on cherchait.\n\n");
        } else if(score == 2) {
            printf("\n👍 Pas mal ! Mais peut-être que quelques détails t'ont échappé.\n\n");
        } else {
            printf("\n🤔 Hmm... on devra vérifier ces informations plus tard.\n\n");
        }
        sleep(2);

        printf("\n✅ Analyse terminée...\n");
        sleep(1);
        printf("💖 Verdict : personnalité remarquable détectée.\n\n");
        sleep(2);

        printf("--------------------------------------------------\n\n");
        printf("🎂 Joyeux anniversaire %s ! 🎂\n\n", prenom);
        sleep(2);
        printf(" Que cette nouvelle année t'apporte encore plus de joie🌸,\n");
        sleep(2);
        printf(" de réussite et de beaux moments partagés.\n\n");
        sleep(3);
        printf(" Merci pour la lumière et la bonne énergie que tu apportes autour de toi...\n");
        sleep(2);
        printf(" et particulièrement dans la vie de mon pote🤝.\n\n");
        sleep(3);
        printf(" En fin de compte c'est lui qui est chanceux de t'avoir trouvé💌.\n\n");
        sleep(2);
        printf("🎉 Aujourd'hui, on célèbre non seulement ton âge,\n");
        sleep(3);
        printf(" mais aussi la personne incroyable que tu es devenue.🌟\n\n");
        sleep(3);
        printf("------ENCORE UNE FOIS HAPPY BIRTHDAY----------\n\n");

    } else {
        printf("\n🚫 Désolé.\n");
        printf("Ce programme ne semble pas vous être destiné.\n");
    }

    return 0;
}
