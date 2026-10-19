    // Method: To Shorten URL
    public String shortenUrl(String originalUrl) {
        String fullHash = DigestUtils.md5DigestAsHex(originalUrl.getBytes());
        String shortCode = fullHash.substring(0, 6);

        if (!urlRepository.exists(shortCode)) {
            urlRepository.saveUrl(shortCode, originalUrl);
        }
        return shortCode;
    }

    // Method: To Retrieve Original URL
    public String getOriginalUrl(String shortCode) {
        return urlRepository.getOriginalUrl(shortCode);
    }
}


