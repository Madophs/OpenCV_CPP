add_executable(lenaGray LenaGray.cpp)
target_include_directories(lenaGray PUBLIC ${PROJECT_BINARY_DIR})
TARGET_LINK_LIBRARIES(lenaGray ${OpenCV_LIBS})
