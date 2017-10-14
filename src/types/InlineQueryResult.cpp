/*
 * Copyright (c) 2015 Oleg Morozenkov
 * Copyright (c) 2017 Maks Mazurov (fox.cpp)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "tgbot/types/InlineQueryResultCachedAudio.h"
#include "tgbot/types/InlineQueryResultCachedDocument.h"
#include "tgbot/types/InlineQueryResultCachedGif.h"
#include "tgbot/types/InlineQueryResultCachedMpeg4Gif.h"
#include "tgbot/types/InlineQueryResultCachedPhoto.h"
#include "tgbot/types/InlineQueryResultCachedSticker.h"
#include "tgbot/types/InlineQueryResultCachedVideo.h"
#include "tgbot/types/InlineQueryResultCachedVoice.h"
#include "tgbot/types/InlineQueryResultAudio.h"
#include "tgbot/types/InlineQueryResultContact.h"
#include "tgbot/types/InlineQueryResultGame.h"
#include "tgbot/types/InlineQueryResultDocument.h"
#include "tgbot/types/InlineQueryResultLocation.h"
#include "tgbot/types/InlineQueryResultVenue.h"
#include "tgbot/types/InlineQueryResultVoice.h"
#include "tgbot/types/InlineQueryResultArticle.h"
#include "tgbot/types/InlineQueryResultGif.h"
#include "tgbot/types/InlineQueryResultMpeg4Gif.h"
#include "tgbot/types/InlineQueryResultPhoto.h"
#include "tgbot/types/InlineQueryResultVideo.h"

using namespace TgBot;

const std::string InlineQueryResultCachedAudio::TYPE = "cached_audio";
const std::string InlineQueryResultCachedDocument::TYPE = "cached_document";
const std::string InlineQueryResultCachedGif::TYPE = "cached_gif";
const std::string InlineQueryResultCachedMpeg4Gif::TYPE = "cached_mpeg4gif";
const std::string InlineQueryResultCachedPhoto::TYPE = "cached_photo";
const std::string InlineQueryResultCachedSticker::TYPE = "cached_sticker";
const std::string InlineQueryResultCachedVideo::TYPE = "cached_video";
const std::string InlineQueryResultCachedVoice::TYPE = "cached_voice";

const std::string InlineQueryResultArticle::TYPE = "article";
const std::string InlineQueryResultAudio::TYPE = "audio";
const std::string InlineQueryResultContact::TYPE = "contact";
const std::string InlineQueryResultGame::TYPE = "game";
const std::string InlineQueryResultDocument::TYPE = "document";
const std::string InlineQueryResultGif::TYPE = "gif";
const std::string InlineQueryResultLocation::TYPE = "location";
const std::string InlineQueryResultMpeg4Gif::TYPE = "mpeg4_gif";
const std::string InlineQueryResultPhoto::TYPE = "photo";
const std::string InlineQueryResultVenue::TYPE = "venue";
const std::string InlineQueryResultVideo::TYPE = "video";
const std::string InlineQueryResultVoice::TYPE = "voice";
