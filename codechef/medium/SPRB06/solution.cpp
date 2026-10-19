            device.setRoom(foundRoom);

            // Save the Device to the database and return it
            return deviceRepository.save(device);
        
        } else {
            // If the Room wasn't found, stop and throw an error
            throw new RuntimeException("Room not found with id: " + roomId);
        }
    }

    public void deleteRoom(Long roomId) {
        roomRepository.deleteById(roomId);
    }

    public void deleteDevice(Long deviceId) {