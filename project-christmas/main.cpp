#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    if (!glfwInit()) {
        return -1; // 초기화 실패
    }

    // 윈도우 생성
    GLFWwindow* window = glfwCreateWindow(800, 600, "DroneShow", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    // GLAD 초기화
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        return -1;
    }

    // 메인 루프
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
