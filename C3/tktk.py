import pygame
import sys

# Initialisation de Pygame
pygame.init()

# Dimensions de la fenêtre
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Homme Alcoolisé")

# Couleurs
WHITE = (255, 255, 255)
BROWN = (139, 69, 19)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
YELLOW = (255, 255, 0)

# Fonction pour dessiner le personnage
def draw_drunk_man(x, y):
    # Tête
    pygame.draw.circle(screen, YELLOW, (x, y), 30)  # Tête
    # Yeux
    pygame.draw.circle(screen, WHITE, (x - 10, y - 10), 5)  # Oeil gauche
    pygame.draw.circle(screen, WHITE, (x + 10, y - 10), 5)  # Oeil droit
    pygame.draw.circle(screen, BLACK, (x - 10, y - 10), 3)  # Pupille gauche
    pygame.draw.circle(screen, BLACK, (x + 10, y - 10), 3)  # Pupille droite
    # Bouche
    pygame.draw.arc(screen, BLACK, (x - 15, y - 5, 30, 20), 3.14, 2 * 3.14, 2)  # Sourire
    # Corps
    pygame.draw.rect(screen, BLUE, (x - 20, y + 30, 40, 70))  # Corps
    # Jambes
    pygame.draw.rect(screen, BROWN, (x - 20, y + 100, 15, 50))  # Jambe gauche
    pygame.draw.rect(screen, BROWN, (x + 5, y + 100, 15, 50))   # Jambe droite
    # Bras
    pygame.draw.rect(screen, BLUE, (x - 30, y + 30, 10, 40))  # Bras gauche
    pygame.draw.rect(screen, BLUE, (x + 20, y + 30, 10, 40))  # Bras droit
    # Bière (dans la main droite)
    pygame.draw.rect(screen, BROWN, (x + 25, y + 40, 15, 30))  # Bière

# Boucle principale
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Remplir l'écran avec du blanc
    screen.fill(WHITE)

    # Dessiner l'homme alcoolisé
    draw_drunk_man(400, 200)

    # Mettre à jour l'écran
    pygame.display.flip()
