        // Find the existing asset
        Asset existingAsset = repository.findById(id).orElse(null);

        if (existingAsset != null) {
            // Update the fields with new data
            existingAsset.setAssetName(assetDetails.getAssetName());
            existingAsset.setCategory(assetDetails.getCategory());
            existingAsset.setPurchaseValue(assetDetails.getPurchaseValue());
            existingAsset.setAssignedTo(assetDetails.getAssignedTo());

            // Save the updated entity back to the database
            return repository.save(existingAsset);
        }

        // Handle error (e.g., Asset not found)
        return null;