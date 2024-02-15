//
//  TextureManager.cpp
//  task_08_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#include "TextureManager.hpp"

bool TextureManager::loadTexture(const char* fileName, std::string id, SDL_Renderer* ren) {

    SDL_Surface* tempSurface = IMG_Load(fileName); // fileName is the file path from the project directory to the image

    if (tempSurface == 0)
        return false;  // something went wrong

    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);

    if (tex != 0) { // if texture creation successful, save the texture in the map
        textureMap[id] = tex; // id is a unique identifier/name for each texture, the texture can be accessed later using this id
        return true;
    }

    return false; // something went wrong

}

void TextureManager::drawTexture(std::string id,
    int x, int y,
    int width, int height,
    SDL_Renderer* ren,
    SDL_RendererFlip flip) {

    SDL_Rect srcRect;
    SDL_Rect destRect;
    srcRect.x = srcRect.y = 0;
    srcRect.w = destRect.w = width;
    srcRect.h = destRect.h = height;
    destRect.x = x;
    destRect.y = y;

    SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);
    }

    void TextureManager::drawOneFrameFromTexture (std::string id, // id of texture to draw
    int x, int y,    // window x,y to draw at;
    int width, int height,  // width and height of texture
    int currentRow, int currentFrame, //row starts from 1
    SDL_Renderer* ren,
    SDL_RendererFlip flip) { // flag to flip texture

        SDL_Rect srcRect;
        SDL_Rect destRect;
        srcRect.x = width * currentFrame;
        srcRect.y = height * (currentRow - 1);
        srcRect.w = destRect.w = width;
        srcRect.h = destRect.h = height;
        destRect.x = x;
        destRect.y = y;

        SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);

    }

    TextureManager* TextureManager::instance = 0;
