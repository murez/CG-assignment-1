#include <utils.h>
#include <mesh.h>

const int WIDTH = 1920;
const int HEIGHT = 1080;

GLFWwindow *window;

int main() {
  WindowGuard windowGuard(window, WIDTH, HEIGHT, "CS171 hw1");

  glEnable(GL_DEPTH_TEST);
  while (!glfwWindowShouldClose(window)) {
    glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
      glfwSetWindowShouldClose(window, true);

    glfwPollEvents();
    glfwSwapBuffers(window);
  }
  return 0;
}