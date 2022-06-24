#include "raylibr.h"

//' Init window
//'
//' Initialize window and OpenGL context.
//'
//' @param width An integer
//' @param height An integer
//' @param title A string
//'
//' @export
// [[Rcpp::export]]
void init_window(int width, int height, const char * title) {
  return InitWindow(width, height, title);
}

//' Window should close
//'
//' Check if KEY_ESCAPE pressed or Close icon pressed.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool window_should_close() {
  return WindowShouldClose();
}

//' Close window
//'
//' Close window and unload OpenGL context.
//'
//'
//' @export
// [[Rcpp::export]]
void close_window() {
  return CloseWindow();
}

//' Is window ready
//'
//' Check if window has been initialized successfully.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_ready() {
  return IsWindowReady();
}

//' Is window fullscreen
//'
//' Check if window is currently fullscreen.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_fullscreen() {
  return IsWindowFullscreen();
}

//' Is window hidden
//'
//' Check if window is currently hidden (only PLATFORM_DESKTOP).
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_hidden() {
  return IsWindowHidden();
}

//' Is window minimized
//'
//' Check if window is currently minimized (only PLATFORM_DESKTOP).
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_minimized() {
  return IsWindowMinimized();
}

//' Is window maximized
//'
//' Check if window is currently maximized (only PLATFORM_DESKTOP).
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_maximized() {
  return IsWindowMaximized();
}

//' Is window focused
//'
//' Check if window is currently focused (only PLATFORM_DESKTOP).
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_focused() {
  return IsWindowFocused();
}

//' Is window resized
//'
//' Check if window has been resized last frame.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_resized() {
  return IsWindowResized();
}

//' Is window state
//'
//' Check if one specific window flag is enabled.
//'
//' @param flag A unsigned int
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_window_state(unsigned int flag) {
  return IsWindowState(flag);
}

//' Set window state
//'
//' Set window configuration state using flags.
//'
//' @param flags A unsigned int
//'
//' @export
// [[Rcpp::export]]
void set_window_state(unsigned int flags) {
  return SetWindowState(flags);
}

//' Clear window state
//'
//' Clear window configuration state flags.
//'
//' @param flags A unsigned int
//'
//' @export
// [[Rcpp::export]]
void clear_window_state(unsigned int flags) {
  return ClearWindowState(flags);
}

//' Toggle fullscreen
//'
//' Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP).
//'
//'
//' @export
// [[Rcpp::export]]
void toggle_fullscreen() {
  return ToggleFullscreen();
}

//' Maximize window
//'
//' Set window state: maximized, if resizable (only PLATFORM_DESKTOP).
//'
//'
//' @export
// [[Rcpp::export]]
void maximize_window() {
  return MaximizeWindow();
}

//' Minimize window
//'
//' Set window state: minimized, if resizable (only PLATFORM_DESKTOP).
//'
//'
//' @export
// [[Rcpp::export]]
void minimize_window() {
  return MinimizeWindow();
}

//' Restore window
//'
//' Set window state: not minimized/maximized (only PLATFORM_DESKTOP).
//'
//'
//' @export
// [[Rcpp::export]]
void restore_window() {
  return RestoreWindow();
}

//' Set window icon
//'
//' Set icon for window (only PLATFORM_DESKTOP).
//'
//' @param image A image
//'
//' @export
// [[Rcpp::export]]
void set_window_icon(Image image) {
  return SetWindowIcon(image);
}

//' Set window title
//'
//' Set title for window (only PLATFORM_DESKTOP).
//'
//' @param title A string
//'
//' @export
// [[Rcpp::export]]
void set_window_title(const char * title) {
  return SetWindowTitle(title);
}

//' Set window position
//'
//' Set window position on screen (only PLATFORM_DESKTOP).
//'
//' @param x An integer
//' @param y An integer
//'
//' @export
// [[Rcpp::export]]
void set_window_position(int x, int y) {
  return SetWindowPosition(x, y);
}

//' Set window monitor
//'
//' Set monitor for the current window (fullscreen mode).
//'
//' @param monitor An integer
//'
//' @export
// [[Rcpp::export]]
void set_window_monitor(int monitor) {
  return SetWindowMonitor(monitor);
}

//' Set window min size
//'
//' Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE).
//'
//' @param width An integer
//' @param height An integer
//'
//' @export
// [[Rcpp::export]]
void set_window_min_size(int width, int height) {
  return SetWindowMinSize(width, height);
}

//' Set window size
//'
//' Set window dimensions.
//'
//' @param width An integer
//' @param height An integer
//'
//' @export
// [[Rcpp::export]]
void set_window_size(int width, int height) {
  return SetWindowSize(width, height);
}

//' Get screen width
//'
//' Get current screen width.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_screen_width() {
  return GetScreenWidth();
}

//' Get screen height
//'
//' Get current screen height.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_screen_height() {
  return GetScreenHeight();
}

//' Get monitor count
//'
//' Get number of connected monitors.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_monitor_count() {
  return GetMonitorCount();
}

//' Get current monitor
//'
//' Get current connected monitor.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_current_monitor() {
  return GetCurrentMonitor();
}

//' Get monitor position
//'
//' Get specified monitor position.
//'
//' @param monitor An integer
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_monitor_position(int monitor) {
  return GetMonitorPosition(monitor);
}

//' Get monitor width
//'
//' Get specified monitor width (max available by monitor).
//'
//' @param monitor An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_monitor_width(int monitor) {
  return GetMonitorWidth(monitor);
}

//' Get monitor height
//'
//' Get specified monitor height (max available by monitor).
//'
//' @param monitor An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_monitor_height(int monitor) {
  return GetMonitorHeight(monitor);
}

//' Get monitor physical width
//'
//' Get specified monitor physical width in millimetres.
//'
//' @param monitor An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_monitor_physical_width(int monitor) {
  return GetMonitorPhysicalWidth(monitor);
}

//' Get monitor physical height
//'
//' Get specified monitor physical height in millimetres.
//'
//' @param monitor An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_monitor_physical_height(int monitor) {
  return GetMonitorPhysicalHeight(monitor);
}

//' Get monitor refresh rate
//'
//' Get specified monitor refresh rate.
//'
//' @param monitor An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_monitor_refresh_rate(int monitor) {
  return GetMonitorRefreshRate(monitor);
}

//' Get window position
//'
//' Get window position XY on monitor.
//'
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_window_position() {
  return GetWindowPosition();
}

//' Get window scale dpi
//'
//' Get window scale DPI factor.
//'
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_window_scale_dpi() {
  return GetWindowScaleDPI();
}

//' Get monitor name
//'
//' Get the human-readable, UTF-8 encoded name of the primary monitor.
//'
//' @param monitor An integer
//' @return A string
//'
//' @export
// [[Rcpp::export]]
const char * get_monitor_name(int monitor) {
  return GetMonitorName(monitor);
}

//' Show cursor
//'
//' Shows cursor.
//'
//'
//' @export
// [[Rcpp::export]]
void show_cursor() {
  return ShowCursor();
}

//' Hide cursor
//'
//' Hides cursor.
//'
//'
//' @export
// [[Rcpp::export]]
void hide_cursor() {
  return HideCursor();
}

//' Is cursor hidden
//'
//' Check if cursor is not visible.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_cursor_hidden() {
  return IsCursorHidden();
}

//' Enable cursor
//'
//' Enables cursor (unlock cursor).
//'
//'
//' @export
// [[Rcpp::export]]
void enable_cursor() {
  return EnableCursor();
}

//' Disable cursor
//'
//' Disables cursor (lock cursor).
//'
//'
//' @export
// [[Rcpp::export]]
void disable_cursor() {
  return DisableCursor();
}

//' Is cursor on screen
//'
//' Check if cursor is on the screen.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_cursor_on_screen() {
  return IsCursorOnScreen();
}

//' Clear background
//'
//' Set background color (framebuffer clear color).
//'
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void clear_background(Color color) {
  return ClearBackground(color);
}

//' Begin drawing
//'
//' Setup canvas (framebuffer) to start drawing.
//'
//'
//' @export
// [[Rcpp::export]]
void begin_drawing() {
  return BeginDrawing();
}

//' End drawing
//'
//' End canvas drawing and swap buffers (double buffering).
//'
//'
//' @export
// [[Rcpp::export]]
void end_drawing() {
  return EndDrawing();
}

//' Begin mode 2d
//'
//' Begin 2D mode with custom camera (2D).
//'
//' @param camera A camera_2d
//'
//' @export
// [[Rcpp::export]]
void begin_mode_2d(Camera2D camera) {
  return BeginMode2D(camera);
}

//' End mode 2d
//'
//' Ends 2D mode with custom camera.
//'
//'
//' @export
// [[Rcpp::export]]
void end_mode_2d() {
  return EndMode2D();
}

//' Begin mode 3d
//'
//' Begin 3D mode with custom camera (3D).
//'
//' @param camera A camera_3d
//'
//' @export
// [[Rcpp::export]]
void begin_mode_3d(Camera3D camera) {
  return BeginMode3D(camera);
}

//' End mode 3d
//'
//' Ends 3D mode and returns to default 2D orthographic mode.
//'
//'
//' @export
// [[Rcpp::export]]
void end_mode_3d() {
  return EndMode3D();
}

//' Get camera matrix
//'
//' Get camera transform matrix (view matrix).
//'
//' @param camera A camera_3d
//' @return A numeric matrix of 4 by 4
//'
//' @export
// [[Rcpp::export]]
RaylibMatrix get_camera_matrix(Camera3D camera) {
  return GetCameraMatrix(camera);
}

//' Get camera matrix 2d
//'
//' Get camera 2d transform matrix.
//'
//' @param camera A camera_2d
//' @return A numeric matrix of 4 by 4
//'
//' @export
// [[Rcpp::export]]
RaylibMatrix get_camera_matrix_2d(Camera2D camera) {
  return GetCameraMatrix2D(camera);
}

//' Get world to screen
//'
//' Get the screen space position for a 3d world space position.
//'
//' @param position A numeric vector of length 3
//' @param camera A camera_3d
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_world_to_screen(Vector3 position, Camera3D camera) {
  return GetWorldToScreen(position, camera);
}

//' Get world to screen ex
//'
//' Get size position for a 3d world space position.
//'
//' @param position A numeric vector of length 3
//' @param camera A camera_3d
//' @param width An integer
//' @param height An integer
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_world_to_screen_ex(Vector3 position, Camera3D camera, int width, int height) {
  return GetWorldToScreenEx(position, camera, width, height);
}

//' Get world to screen 2d
//'
//' Get the screen space position for a 2d camera world space position.
//'
//' @param position A numeric vector of length 2
//' @param camera A camera_2d
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_world_to_screen_2d(Vector2 position, Camera2D camera) {
  return GetWorldToScreen2D(position, camera);
}

//' Get screen to world 2d
//'
//' Get the world space position for a 2d camera screen space position.
//'
//' @param position A numeric vector of length 2
//' @param camera A camera_2d
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_screen_to_world_2d(Vector2 position, Camera2D camera) {
  return GetScreenToWorld2D(position, camera);
}

//' Set target fps
//'
//' Set target FPS (maximum).
//'
//' @param fps An integer
//'
//' @export
// [[Rcpp::export]]
void set_target_fps(int fps) {
  return SetTargetFPS(fps);
}

//' Get fps
//'
//' Get current FPS.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_fps() {
  return GetFPS();
}

//' Get frame time
//'
//' Get time in seconds for last frame drawn (delta time).
//'
//' @return A number
//'
//' @export
// [[Rcpp::export]]
float get_frame_time() {
  return GetFrameTime();
}

//' Get time
//'
//' Get elapsed time in seconds since InitWindow().
//'
//' @return A double
//'
//' @export
// [[Rcpp::export]]
double get_time() {
  return GetTime();
}

//' Get random value
//'
//' Get a random value between min and max (both included).
//'
//' @param min An integer
//' @param max An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_random_value(int min, int max) {
  return GetRandomValue(min, max);
}

//' Take screenshot
//'
//' Takes a screenshot of current screen (filename extension defines format).
//'
//' @param file_name A string
//'
//' @export
// [[Rcpp::export]]
void take_screenshot(const char * file_name) {
  return TakeScreenshot(file_name);
}

//' Is key pressed
//'
//' Check if a key has been pressed once.
//'
//' @param key An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_key_pressed(int key) {
  return IsKeyPressed(key);
}

//' Is key down
//'
//' Check if a key is being pressed.
//'
//' @param key An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_key_down(int key) {
  return IsKeyDown(key);
}

//' Is key released
//'
//' Check if a key has been released once.
//'
//' @param key An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_key_released(int key) {
  return IsKeyReleased(key);
}

//' Is key up
//'
//' Check if a key is NOT being pressed.
//'
//' @param key An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_key_up(int key) {
  return IsKeyUp(key);
}

//' Set exit key
//'
//' Set a custom key to exit program (default is ESC).
//'
//' @param key An integer
//'
//' @export
// [[Rcpp::export]]
void set_exit_key(int key) {
  return SetExitKey(key);
}

//' Get key pressed
//'
//' Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_key_pressed() {
  return GetKeyPressed();
}

//' Get char pressed
//'
//' Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_char_pressed() {
  return GetCharPressed();
}

//' Is mouse button pressed
//'
//' Check if a mouse button has been pressed once.
//'
//' @param button An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_mouse_button_pressed(int button) {
  return IsMouseButtonPressed(button);
}

//' Is mouse button down
//'
//' Check if a mouse button is being pressed.
//'
//' @param button An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_mouse_button_down(int button) {
  return IsMouseButtonDown(button);
}

//' Is mouse button released
//'
//' Check if a mouse button has been released once.
//'
//' @param button An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_mouse_button_released(int button) {
  return IsMouseButtonReleased(button);
}

//' Is mouse button up
//'
//' Check if a mouse button is NOT being pressed.
//'
//' @param button An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_mouse_button_up(int button) {
  return IsMouseButtonUp(button);
}

//' Get mouse x
//'
//' Get mouse position X.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_mouse_x() {
  return GetMouseX();
}

//' Get mouse y
//'
//' Get mouse position Y.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_mouse_y() {
  return GetMouseY();
}

//' Get mouse position
//'
//' Get mouse position XY.
//'
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_mouse_position() {
  return GetMousePosition();
}

//' Get mouse delta
//'
//' Get mouse delta between frames.
//'
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 get_mouse_delta() {
  return GetMouseDelta();
}

//' Set mouse position
//'
//' Set mouse position XY.
//'
//' @param x An integer
//' @param y An integer
//'
//' @export
// [[Rcpp::export]]
void set_mouse_position(int x, int y) {
  return SetMousePosition(x, y);
}

//' Set mouse offset
//'
//' Set mouse offset.
//'
//' @param offset_x An integer
//' @param offset_y An integer
//'
//' @export
// [[Rcpp::export]]
void set_mouse_offset(int offset_x, int offset_y) {
  return SetMouseOffset(offset_x, offset_y);
}

//' Set mouse scale
//'
//' Set mouse scaling.
//'
//' @param scale_x A number
//' @param scale_y A number
//'
//' @export
// [[Rcpp::export]]
void set_mouse_scale(float scale_x, float scale_y) {
  return SetMouseScale(scale_x, scale_y);
}

//' Get mouse wheel move
//'
//' Get mouse wheel movement Y.
//'
//' @return A number
//'
//' @export
// [[Rcpp::export]]
float get_mouse_wheel_move() {
  return GetMouseWheelMove();
}

//' Set mouse cursor
//'
//' Set mouse cursor.
//'
//' @param cursor An integer
//'
//' @export
// [[Rcpp::export]]
void set_mouse_cursor(int cursor) {
  return SetMouseCursor(cursor);
}

//' Set camera pan control
//'
//' Set camera pan key to combine with mouse movement (free camera).
//'
//' @param key_pan An integer
//'
//' @export
// [[Rcpp::export]]
void set_camera_pan_control(int key_pan) {
  return SetCameraPanControl(key_pan);
}

//' Set camera alt control
//'
//' Set camera alt key to combine with mouse movement (free camera).
//'
//' @param key_alt An integer
//'
//' @export
// [[Rcpp::export]]
void set_camera_alt_control(int key_alt) {
  return SetCameraAltControl(key_alt);
}

//' Set camera smooth zoom control
//'
//' Set camera smooth zoom key to combine with mouse (free camera).
//'
//' @param key_smooth_zoom An integer
//'
//' @export
// [[Rcpp::export]]
void set_camera_smooth_zoom_control(int key_smooth_zoom) {
  return SetCameraSmoothZoomControl(key_smooth_zoom);
}

//' Set camera move controls
//'
//' Set camera move controls (1st person and 3rd person cameras).
//'
//' @param key_front An integer
//' @param key_back An integer
//' @param key_right An integer
//' @param key_left An integer
//' @param key_up An integer
//' @param key_down An integer
//'
//' @export
// [[Rcpp::export]]
void set_camera_move_controls(int key_front, int key_back, int key_right, int key_left, int key_up, int key_down) {
  return SetCameraMoveControls(key_front, key_back, key_right, key_left, key_up, key_down);
}

//' Set shapes texture
//'
//' Set texture and rectangle to be used on shapes drawing.
//'
//' @param texture A texture
//' @param source A rectangle
//'
//' @export
// [[Rcpp::export]]
void set_shapes_texture(Texture texture, Rectangle source) {
  return SetShapesTexture(texture, source);
}

//' Draw pixel
//'
//' Draw a pixel.
//'
//' @param pos_x An integer
//' @param pos_y An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_pixel(int pos_x, int pos_y, Color color) {
  return DrawPixel(pos_x, pos_y, color);
}

//' Draw pixel v
//'
//' Draw a pixel (Vector version).
//'
//' @param position A numeric vector of length 2
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_pixel_v(Vector2 position, Color color) {
  return DrawPixelV(position, color);
}

//' Draw line
//'
//' Draw a line.
//'
//' @param start_pos_x An integer
//' @param start_pos_y An integer
//' @param end_pos_x An integer
//' @param end_pos_y An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_line(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y, Color color) {
  return DrawLine(start_pos_x, start_pos_y, end_pos_x, end_pos_y, color);
}

//' Draw line v
//'
//' Draw a line (Vector version).
//'
//' @param start_pos A numeric vector of length 2
//' @param end_pos A numeric vector of length 2
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_line_v(Vector2 start_pos, Vector2 end_pos, Color color) {
  return DrawLineV(start_pos, end_pos, color);
}

//' Draw line ex
//'
//' Draw a line defining thickness.
//'
//' @param start_pos A numeric vector of length 2
//' @param end_pos A numeric vector of length 2
//' @param thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_line_ex(Vector2 start_pos, Vector2 end_pos, float thick, Color color) {
  return DrawLineEx(start_pos, end_pos, thick, color);
}

//' Draw line bezier
//'
//' Draw a line using cubic-bezier curves in-out.
//'
//' @param start_pos A numeric vector of length 2
//' @param end_pos A numeric vector of length 2
//' @param thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_line_bezier(Vector2 start_pos, Vector2 end_pos, float thick, Color color) {
  return DrawLineBezier(start_pos, end_pos, thick, color);
}

//' Draw line bezier quad
//'
//' Draw line using quadratic bezier curves with a control point.
//'
//' @param start_pos A numeric vector of length 2
//' @param end_pos A numeric vector of length 2
//' @param control_pos A numeric vector of length 2
//' @param thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_line_bezier_quad(Vector2 start_pos, Vector2 end_pos, Vector2 control_pos, float thick, Color color) {
  return DrawLineBezierQuad(start_pos, end_pos, control_pos, thick, color);
}

//' Draw line bezier cubic
//'
//' Draw line using cubic bezier curves with 2 control points.
//'
//' @param start_pos A numeric vector of length 2
//' @param end_pos A numeric vector of length 2
//' @param start_control_pos A numeric vector of length 2
//' @param end_control_pos A numeric vector of length 2
//' @param thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_line_bezier_cubic(Vector2 start_pos, Vector2 end_pos, Vector2 start_control_pos, Vector2 end_control_pos, float thick, Color color) {
  return DrawLineBezierCubic(start_pos, end_pos, start_control_pos, end_control_pos, thick, color);
}

//' Draw circle
//'
//' Draw a color-filled circle.
//'
//' @param center_x An integer
//' @param center_y An integer
//' @param radius A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_circle(int center_x, int center_y, float radius, Color color) {
  return DrawCircle(center_x, center_y, radius, color);
}

//' Draw circle sector
//'
//' Draw a piece of a circle.
//'
//' @param center A numeric vector of length 2
//' @param radius A number
//' @param start_angle A number
//' @param end_angle A number
//' @param segments An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_circle_sector(Vector2 center, float radius, float start_angle, float end_angle, int segments, Color color) {
  return DrawCircleSector(center, radius, start_angle, end_angle, segments, color);
}

//' Draw circle sector lines
//'
//' Draw circle sector outline.
//'
//' @param center A numeric vector of length 2
//' @param radius A number
//' @param start_angle A number
//' @param end_angle A number
//' @param segments An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_circle_sector_lines(Vector2 center, float radius, float start_angle, float end_angle, int segments, Color color) {
  return DrawCircleSectorLines(center, radius, start_angle, end_angle, segments, color);
}

//' Draw circle gradient
//'
//' Draw a gradient-filled circle.
//'
//' @param center_x An integer
//' @param center_y An integer
//' @param radius A number
//' @param color_1 A color
//' @param color_2 A color
//'
//' @export
// [[Rcpp::export]]
void draw_circle_gradient(int center_x, int center_y, float radius, Color color_1, Color color_2) {
  return DrawCircleGradient(center_x, center_y, radius, color_1, color_2);
}

//' Draw circle v
//'
//' Draw a color-filled circle (Vector version).
//'
//' @param center A numeric vector of length 2
//' @param radius A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_circle_v(Vector2 center, float radius, Color color) {
  return DrawCircleV(center, radius, color);
}

//' Draw circle lines
//'
//' Draw circle outline.
//'
//' @param center_x An integer
//' @param center_y An integer
//' @param radius A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_circle_lines(int center_x, int center_y, float radius, Color color) {
  return DrawCircleLines(center_x, center_y, radius, color);
}

//' Draw ellipse
//'
//' Draw ellipse.
//'
//' @param center_x An integer
//' @param center_y An integer
//' @param radius_h A number
//' @param radius_v A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_ellipse(int center_x, int center_y, float radius_h, float radius_v, Color color) {
  return DrawEllipse(center_x, center_y, radius_h, radius_v, color);
}

//' Draw ellipse lines
//'
//' Draw ellipse outline.
//'
//' @param center_x An integer
//' @param center_y An integer
//' @param radius_h A number
//' @param radius_v A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_ellipse_lines(int center_x, int center_y, float radius_h, float radius_v, Color color) {
  return DrawEllipseLines(center_x, center_y, radius_h, radius_v, color);
}

//' Draw ring
//'
//' Draw ring.
//'
//' @param center A numeric vector of length 2
//' @param inner_radius A number
//' @param outer_radius A number
//' @param start_angle A number
//' @param end_angle A number
//' @param segments An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_ring(Vector2 center, float inner_radius, float outer_radius, float start_angle, float end_angle, int segments, Color color) {
  return DrawRing(center, inner_radius, outer_radius, start_angle, end_angle, segments, color);
}

//' Draw ring lines
//'
//' Draw ring outline.
//'
//' @param center A numeric vector of length 2
//' @param inner_radius A number
//' @param outer_radius A number
//' @param start_angle A number
//' @param end_angle A number
//' @param segments An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_ring_lines(Vector2 center, float inner_radius, float outer_radius, float start_angle, float end_angle, int segments, Color color) {
  return DrawRingLines(center, inner_radius, outer_radius, start_angle, end_angle, segments, color);
}

//' Draw rectangle
//'
//' Draw a color-filled rectangle.
//'
//' @param pos_x An integer
//' @param pos_y An integer
//' @param width An integer
//' @param height An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle(int pos_x, int pos_y, int width, int height, Color color) {
  return DrawRectangle(pos_x, pos_y, width, height, color);
}

//' Draw rectangle v
//'
//' Draw a color-filled rectangle (Vector version).
//'
//' @param position A numeric vector of length 2
//' @param size A numeric vector of length 2
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_v(Vector2 position, Vector2 size, Color color) {
  return DrawRectangleV(position, size, color);
}

//' Draw rectangle rec
//'
//' Draw a color-filled rectangle.
//'
//' @param rec A rectangle
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_rec(Rectangle rec, Color color) {
  return DrawRectangleRec(rec, color);
}

//' Draw rectangle pro
//'
//' Draw a color-filled rectangle with pro parameters.
//'
//' @param rec A rectangle
//' @param origin A numeric vector of length 2
//' @param rotation A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_pro(Rectangle rec, Vector2 origin, float rotation, Color color) {
  return DrawRectanglePro(rec, origin, rotation, color);
}

//' Draw rectangle gradient v
//'
//' Draw a vertical-gradient-filled rectangle.
//'
//' @param pos_x An integer
//' @param pos_y An integer
//' @param width An integer
//' @param height An integer
//' @param color_1 A color
//' @param color_2 A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_gradient_v(int pos_x, int pos_y, int width, int height, Color color_1, Color color_2) {
  return DrawRectangleGradientV(pos_x, pos_y, width, height, color_1, color_2);
}

//' Draw rectangle gradient h
//'
//' Draw a horizontal-gradient-filled rectangle.
//'
//' @param pos_x An integer
//' @param pos_y An integer
//' @param width An integer
//' @param height An integer
//' @param color_1 A color
//' @param color_2 A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_gradient_h(int pos_x, int pos_y, int width, int height, Color color_1, Color color_2) {
  return DrawRectangleGradientH(pos_x, pos_y, width, height, color_1, color_2);
}

//' Draw rectangle gradient ex
//'
//' Draw a gradient-filled rectangle with custom vertex colors.
//'
//' @param rec A rectangle
//' @param col_1 A color
//' @param col_2 A color
//' @param col_3 A color
//' @param col_4 A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_gradient_ex(Rectangle rec, Color col_1, Color col_2, Color col_3, Color col_4) {
  return DrawRectangleGradientEx(rec, col_1, col_2, col_3, col_4);
}

//' Draw rectangle lines
//'
//' Draw rectangle outline.
//'
//' @param pos_x An integer
//' @param pos_y An integer
//' @param width An integer
//' @param height An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_lines(int pos_x, int pos_y, int width, int height, Color color) {
  return DrawRectangleLines(pos_x, pos_y, width, height, color);
}

//' Draw rectangle lines ex
//'
//' Draw rectangle outline with extended parameters.
//'
//' @param rec A rectangle
//' @param line_thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_lines_ex(Rectangle rec, float line_thick, Color color) {
  return DrawRectangleLinesEx(rec, line_thick, color);
}

//' Draw rectangle rounded
//'
//' Draw rectangle with rounded edges.
//'
//' @param rec A rectangle
//' @param roundness A number
//' @param segments An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_rounded(Rectangle rec, float roundness, int segments, Color color) {
  return DrawRectangleRounded(rec, roundness, segments, color);
}

//' Draw rectangle rounded lines
//'
//' Draw rectangle with rounded edges outline.
//'
//' @param rec A rectangle
//' @param roundness A number
//' @param segments An integer
//' @param line_thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_rectangle_rounded_lines(Rectangle rec, float roundness, int segments, float line_thick, Color color) {
  return DrawRectangleRoundedLines(rec, roundness, segments, line_thick, color);
}

//' Draw triangle
//'
//' Draw a color-filled triangle (vertex in counter-clockwise order!).
//'
//' @param v_1 A numeric vector of length 2
//' @param v_2 A numeric vector of length 2
//' @param v_3 A numeric vector of length 2
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_triangle(Vector2 v_1, Vector2 v_2, Vector2 v_3, Color color) {
  return DrawTriangle(v_1, v_2, v_3, color);
}

//' Draw triangle lines
//'
//' Draw triangle outline (vertex in counter-clockwise order!).
//'
//' @param v_1 A numeric vector of length 2
//' @param v_2 A numeric vector of length 2
//' @param v_3 A numeric vector of length 2
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_triangle_lines(Vector2 v_1, Vector2 v_2, Vector2 v_3, Color color) {
  return DrawTriangleLines(v_1, v_2, v_3, color);
}

//' Draw poly
//'
//' Draw a regular polygon (Vector version).
//'
//' @param center A numeric vector of length 2
//' @param sides An integer
//' @param radius A number
//' @param rotation A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_poly(Vector2 center, int sides, float radius, float rotation, Color color) {
  return DrawPoly(center, sides, radius, rotation, color);
}

//' Draw poly lines
//'
//' Draw a polygon outline of n sides.
//'
//' @param center A numeric vector of length 2
//' @param sides An integer
//' @param radius A number
//' @param rotation A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_poly_lines(Vector2 center, int sides, float radius, float rotation, Color color) {
  return DrawPolyLines(center, sides, radius, rotation, color);
}

//' Draw poly lines ex
//'
//' Draw a polygon outline of n sides with extended parameters.
//'
//' @param center A numeric vector of length 2
//' @param sides An integer
//' @param radius A number
//' @param rotation A number
//' @param line_thick A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_poly_lines_ex(Vector2 center, int sides, float radius, float rotation, float line_thick, Color color) {
  return DrawPolyLinesEx(center, sides, radius, rotation, line_thick, color);
}

//' Check collision recs
//'
//' Check collision between two rectangles.
//'
//' @param rec_1 A rectangle
//' @param rec_2 A rectangle
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_recs(Rectangle rec_1, Rectangle rec_2) {
  return CheckCollisionRecs(rec_1, rec_2);
}

//' Check collision circles
//'
//' Check collision between two circles.
//'
//' @param center_1 A numeric vector of length 2
//' @param radius_1 A number
//' @param center_2 A numeric vector of length 2
//' @param radius_2 A number
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_circles(Vector2 center_1, float radius_1, Vector2 center_2, float radius_2) {
  return CheckCollisionCircles(center_1, radius_1, center_2, radius_2);
}

//' Check collision circle rec
//'
//' Check collision between circle and rectangle.
//'
//' @param center A numeric vector of length 2
//' @param radius A number
//' @param rec A rectangle
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_circle_rec(Vector2 center, float radius, Rectangle rec) {
  return CheckCollisionCircleRec(center, radius, rec);
}

//' Check collision point rec
//'
//' Check if point is inside rectangle.
//'
//' @param point A numeric vector of length 2
//' @param rec A rectangle
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_point_rec(Vector2 point, Rectangle rec) {
  return CheckCollisionPointRec(point, rec);
}

//' Check collision point circle
//'
//' Check if point is inside circle.
//'
//' @param point A numeric vector of length 2
//' @param center A numeric vector of length 2
//' @param radius A number
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_point_circle(Vector2 point, Vector2 center, float radius) {
  return CheckCollisionPointCircle(point, center, radius);
}

//' Check collision point triangle
//'
//' Check if point is inside a triangle.
//'
//' @param point A numeric vector of length 2
//' @param p_1 A numeric vector of length 2
//' @param p_2 A numeric vector of length 2
//' @param p_3 A numeric vector of length 2
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_point_triangle(Vector2 point, Vector2 p_1, Vector2 p_2, Vector2 p_3) {
  return CheckCollisionPointTriangle(point, p_1, p_2, p_3);
}

//' Check collision point line
//'
//' Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold].
//'
//' @param point A numeric vector of length 2
//' @param p_1 A numeric vector of length 2
//' @param p_2 A numeric vector of length 2
//' @param threshold An integer
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool check_collision_point_line(Vector2 point, Vector2 p_1, Vector2 p_2, int threshold) {
  return CheckCollisionPointLine(point, p_1, p_2, threshold);
}

//' Get collision rec
//'
//' Get collision rectangle for two rectangles collision.
//'
//' @param rec_1 A rectangle
//' @param rec_2 A rectangle
//' @return A rectangle
//'
//' @export
// [[Rcpp::export]]
Rectangle get_collision_rec(Rectangle rec_1, Rectangle rec_2) {
  return GetCollisionRec(rec_1, rec_2);
}

//' Load image
//'
//' Load image from file into CPU memory (RAM).
//'
//' @param file_name A string
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image load_image(const char * file_name) {
  return LoadImage(file_name);
}

//' Load image raw
//'
//' Load image from RAW file data.
//'
//' @param file_name A string
//' @param width An integer
//' @param height An integer
//' @param format An integer
//' @param header_size An integer
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image load_image_raw(const char * file_name, int width, int height, int format, int header_size) {
  return LoadImageRaw(file_name, width, height, format, header_size);
}

//' Load image from texture
//'
//' Load image from GPU texture data.
//'
//' @param texture A texture
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image load_image_from_texture(Texture texture) {
  return LoadImageFromTexture(texture);
}

//' Load image from screen
//'
//' Load image from screen buffer and (screenshot).
//'
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image load_image_from_screen() {
  return LoadImageFromScreen();
}

//' Unload image
//'
//' Unload image from CPU memory (RAM).
//'
//' @param image A image
//'
//' @export
// [[Rcpp::export]]
void unload_image(Image image) {
  return UnloadImage(image);
}

//' Export image
//'
//' Export image data to file, returns true on success.
//'
//' @param image A image
//' @param file_name A string
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool export_image(Image image, const char * file_name) {
  return ExportImage(image, file_name);
}

//' Export image as code
//'
//' Export image as code file defining an array of bytes, returns true on success.
//'
//' @param image A image
//' @param file_name A string
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool export_image_as_code(Image image, const char * file_name) {
  return ExportImageAsCode(image, file_name);
}

//' Gen image color
//'
//' Generate image: plain color.
//'
//' @param width An integer
//' @param height An integer
//' @param color A color
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_color(int width, int height, Color color) {
  return GenImageColor(width, height, color);
}

//' Gen image gradient v
//'
//' Generate image: vertical gradient.
//'
//' @param width An integer
//' @param height An integer
//' @param top A color
//' @param bottom A color
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_gradient_v(int width, int height, Color top, Color bottom) {
  return GenImageGradientV(width, height, top, bottom);
}

//' Gen image gradient h
//'
//' Generate image: horizontal gradient.
//'
//' @param width An integer
//' @param height An integer
//' @param left A color
//' @param right A color
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_gradient_h(int width, int height, Color left, Color right) {
  return GenImageGradientH(width, height, left, right);
}

//' Gen image gradient radial
//'
//' Generate image: radial gradient.
//'
//' @param width An integer
//' @param height An integer
//' @param density A number
//' @param inner A color
//' @param outer A color
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_gradient_radial(int width, int height, float density, Color inner, Color outer) {
  return GenImageGradientRadial(width, height, density, inner, outer);
}

//' Gen image checked
//'
//' Generate image: checked.
//'
//' @param width An integer
//' @param height An integer
//' @param checks_x An integer
//' @param checks_y An integer
//' @param col_1 A color
//' @param col_2 A color
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_checked(int width, int height, int checks_x, int checks_y, Color col_1, Color col_2) {
  return GenImageChecked(width, height, checks_x, checks_y, col_1, col_2);
}

//' Gen image white noise
//'
//' Generate image: white noise.
//'
//' @param width An integer
//' @param height An integer
//' @param factor A number
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_white_noise(int width, int height, float factor) {
  return GenImageWhiteNoise(width, height, factor);
}

//' Gen image cellular
//'
//' Generate image: cellular algorithm, bigger tileSize means bigger cells.
//'
//' @param width An integer
//' @param height An integer
//' @param tile_size An integer
//' @return A image
//'
//' @export
// [[Rcpp::export]]
Image gen_image_cellular(int width, int height, int tile_size) {
  return GenImageCellular(width, height, tile_size);
}

//' Load texture
//'
//' Load texture from file into GPU memory (VRAM).
//'
//' @param file_name A string
//' @return A texture
//'
//' @export
// [[Rcpp::export]]
Texture load_texture(const char * file_name) {
  return LoadTexture(file_name);
}

//' Load texture from image
//'
//' Load texture from image data.
//'
//' @param image A image
//' @return A texture
//'
//' @export
// [[Rcpp::export]]
Texture load_texture_from_image(Image image) {
  return LoadTextureFromImage(image);
}

//' Draw texture
//'
//' Draw a Texture2D.
//'
//' @param texture A texture
//' @param pos_x An integer
//' @param pos_y An integer
//' @param tint A color
//'
//' @export
// [[Rcpp::export]]
void draw_texture(Texture texture, int pos_x, int pos_y, Color tint) {
  return DrawTexture(texture, pos_x, pos_y, tint);
}

//' Fade
//'
//' Get color with alpha applied, alpha goes from 0.0f to 1.0f.
//'
//' @param color A color
//' @param alpha A number
//' @return A color
//'
//' @export
// [[Rcpp::export]]
Color fade(Color color, float alpha) {
  return Fade(color, alpha);
}

//' Color to int
//'
//' Get hexadecimal value for a Color.
//'
//' @param color A color
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int color_to_int(Color color) {
  return ColorToInt(color);
}

//' Color normalize
//'
//' Get Color normalized as float [0..1].
//'
//' @param color A color
//' @return A numeric vector of length 4
//'
//' @export
// [[Rcpp::export]]
Vector4 color_normalize(Color color) {
  return ColorNormalize(color);
}

//' Color from normalized
//'
//' Get Color from normalized values [0..1].
//'
//' @param normalized A numeric vector of length 4
//' @return A color
//'
//' @export
// [[Rcpp::export]]
Color color_from_normalized(Vector4 normalized) {
  return ColorFromNormalized(normalized);
}

//' Color to hsv
//'
//' Get HSV values for a Color, hue [0..360], saturation/value [0..1].
//'
//' @param color A color
//' @return A numeric vector of length 3
//'
//' @export
// [[Rcpp::export]]
Vector3 color_to_hsv(Color color) {
  return ColorToHSV(color);
}

//' Color from hsv
//'
//' Get a Color from HSV values, hue [0..360], saturation/value [0..1].
//'
//' @param hue A number
//' @param saturation A number
//' @param value A number
//' @return A color
//'
//' @export
// [[Rcpp::export]]
Color color_from_hsv(float hue, float saturation, float value) {
  return ColorFromHSV(hue, saturation, value);
}

//' Color alpha
//'
//' Get color with alpha applied, alpha goes from 0.0f to 1.0f.
//'
//' @param color A color
//' @param alpha A number
//' @return A color
//'
//' @export
// [[Rcpp::export]]
Color color_alpha(Color color, float alpha) {
  return ColorAlpha(color, alpha);
}

//' Color alpha blend
//'
//' Get src alpha-blended into dst color with tint.
//'
//' @param dst A color
//' @param src A color
//' @param tint A color
//' @return A color
//'
//' @export
// [[Rcpp::export]]
Color color_alpha_blend(Color dst, Color src, Color tint) {
  return ColorAlphaBlend(dst, src, tint);
}

//' Get color
//'
//' Get Color structure from hexadecimal value.
//'
//' @param hex_value A unsigned int
//' @return A color
//'
//' @export
// [[Rcpp::export]]
Color get_color(unsigned int hex_value) {
  return GetColor(hex_value);
}

//' Get font default
//'
//' Get the default Font.
//'
//' @return A font
//'
//' @export
// [[Rcpp::export]]
Font get_font_default() {
  return GetFontDefault();
}

//' Load font
//'
//' Load font from file into GPU memory (VRAM).
//'
//' @param file_name A string
//' @return A font
//'
//' @export
// [[Rcpp::export]]
Font load_font(const char * file_name) {
  return LoadFont(file_name);
}

//' Unload font
//'
//' Unload Font from GPU memory (VRAM).
//'
//' @param font A font
//'
//' @export
// [[Rcpp::export]]
void unload_font(Font font) {
  return UnloadFont(font);
}

//' Draw fps
//'
//' Draw current FPS.
//'
//' @param pos_x An integer
//' @param pos_y An integer
//'
//' @export
// [[Rcpp::export]]
void draw_fps(int pos_x, int pos_y) {
  return DrawFPS(pos_x, pos_y);
}

//' Draw text
//'
//' Draw text (using default font).
//'
//' @param text A string
//' @param pos_x An integer
//' @param pos_y An integer
//' @param font_size An integer
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_text(const char * text, int pos_x, int pos_y, int font_size, Color color) {
  return DrawText(text, pos_x, pos_y, font_size, color);
}

//' Draw text ex
//'
//' Draw text using font and additional parameters.
//'
//' @param font A font
//' @param text A string
//' @param position A numeric vector of length 2
//' @param font_size A number
//' @param spacing A number
//' @param tint A color
//'
//' @export
// [[Rcpp::export]]
void draw_text_ex(Font font, const char * text, Vector2 position, float font_size, float spacing, Color tint) {
  return DrawTextEx(font, text, position, font_size, spacing, tint);
}

//' Measure text
//'
//' Measure string width for default font.
//'
//' @param text A string
//' @param font_size An integer
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int measure_text(const char * text, int font_size) {
  return MeasureText(text, font_size);
}

//' Measure text ex
//'
//' Measure string size for Font.
//'
//' @param font A font
//' @param text A string
//' @param font_size A number
//' @param spacing A number
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 measure_text_ex(Font font, const char * text, float font_size, float spacing) {
  return MeasureTextEx(font, text, font_size, spacing);
}

//' Draw cube
//'
//' Draw cube.
//'
//' @param position A numeric vector of length 3
//' @param width A number
//' @param height A number
//' @param length A number
//' @param color A color
//'
//' @export
// [[Rcpp::export]]
void draw_cube(Vector3 position, float width, float height, float length, Color color) {
  return DrawCube(position, width, height, length, color);
}

//' Draw grid
//'
//' Draw a grid (centered at (0, 0, 0)).
//'
//' @param slices An integer
//' @param spacing A number
//'
//' @export
// [[Rcpp::export]]
void draw_grid(int slices, float spacing) {
  return DrawGrid(slices, spacing);
}

//' Init audio device
//'
//' Initialize audio device and context.
//'
//'
//' @export
// [[Rcpp::export]]
void init_audio_device() {
  return InitAudioDevice();
}

//' Close audio device
//'
//' Close the audio device and context.
//'
//'
//' @export
// [[Rcpp::export]]
void close_audio_device() {
  return CloseAudioDevice();
}

//' Is audio device ready
//'
//' Check if audio device has been initialized successfully.
//'
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_audio_device_ready() {
  return IsAudioDeviceReady();
}

//' Set master volume
//'
//' Set master volume (listener).
//'
//' @param volume A number
//'
//' @export
// [[Rcpp::export]]
void set_master_volume(float volume) {
  return SetMasterVolume(volume);
}

//' Load wave
//'
//' Load wave data from file.
//'
//' @param file_name A string
//' @return A wave
//'
//' @export
// [[Rcpp::export]]
Wave load_wave(const char * file_name) {
  return LoadWave(file_name);
}

//' Load sound
//'
//' Load sound from file.
//'
//' @param file_name A string
//' @return A sound
//'
//' @export
// [[Rcpp::export]]
Sound load_sound(const char * file_name) {
  return LoadSound(file_name);
}

//' Load sound from wave
//'
//' Load sound from wave data.
//'
//' @param wave A wave
//' @return A sound
//'
//' @export
// [[Rcpp::export]]
Sound load_sound_from_wave(Wave wave) {
  return LoadSoundFromWave(wave);
}

//' Unload wave
//'
//' Unload wave data.
//'
//' @param wave A wave
//'
//' @export
// [[Rcpp::export]]
void unload_wave(Wave wave) {
  return UnloadWave(wave);
}

//' Unload sound
//'
//' Unload sound.
//'
//' @param sound A sound
//'
//' @export
// [[Rcpp::export]]
void unload_sound(Sound sound) {
  return UnloadSound(sound);
}

//' Play sound
//'
//' Play a sound.
//'
//' @param sound A sound
//'
//' @export
// [[Rcpp::export]]
void play_sound(Sound sound) {
  return PlaySound(sound);
}

//' Stop sound
//'
//' Stop playing a sound.
//'
//' @param sound A sound
//'
//' @export
// [[Rcpp::export]]
void stop_sound(Sound sound) {
  return StopSound(sound);
}

//' Pause sound
//'
//' Pause a sound.
//'
//' @param sound A sound
//'
//' @export
// [[Rcpp::export]]
void pause_sound(Sound sound) {
  return PauseSound(sound);
}

//' Resume sound
//'
//' Resume a paused sound.
//'
//' @param sound A sound
//'
//' @export
// [[Rcpp::export]]
void resume_sound(Sound sound) {
  return ResumeSound(sound);
}

//' Play sound multi
//'
//' Play a sound (using multichannel buffer pool).
//'
//' @param sound A sound
//'
//' @export
// [[Rcpp::export]]
void play_sound_multi(Sound sound) {
  return PlaySoundMulti(sound);
}

//' Stop sound multi
//'
//' Stop any sound playing (using multichannel buffer pool).
//'
//'
//' @export
// [[Rcpp::export]]
void stop_sound_multi() {
  return StopSoundMulti();
}

//' Get sounds playing
//'
//' Get number of sounds playing in the multichannel.
//'
//' @return An integer
//'
//' @export
// [[Rcpp::export]]
int get_sounds_playing() {
  return GetSoundsPlaying();
}

//' Is sound playing
//'
//' Check if a sound is currently playing.
//'
//' @param sound A sound
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_sound_playing(Sound sound) {
  return IsSoundPlaying(sound);
}

//' Set sound volume
//'
//' Set volume for a sound (1.0 is max level).
//'
//' @param sound A sound
//' @param volume A number
//'
//' @export
// [[Rcpp::export]]
void set_sound_volume(Sound sound, float volume) {
  return SetSoundVolume(sound, volume);
}

//' Set sound pitch
//'
//' Set pitch for a sound (1.0 is base level).
//'
//' @param sound A sound
//' @param pitch A number
//'
//' @export
// [[Rcpp::export]]
void set_sound_pitch(Sound sound, float pitch) {
  return SetSoundPitch(sound, pitch);
}

//' Load music stream
//'
//' Load music stream from file.
//'
//' @param file_name A string
//' @return A music
//'
//' @export
// [[Rcpp::export]]
Music load_music_stream(const char * file_name) {
  return LoadMusicStream(file_name);
}

//' Unload music stream
//'
//' Unload music stream.
//'
//' @param music A music
//'
//' @export
// [[Rcpp::export]]
void unload_music_stream(Music music) {
  return UnloadMusicStream(music);
}

//' Play music stream
//'
//' Start music playing.
//'
//' @param music A music
//'
//' @export
// [[Rcpp::export]]
void play_music_stream(Music music) {
  return PlayMusicStream(music);
}

//' Is music stream playing
//'
//' Check if music is playing.
//'
//' @param music A music
//' @return A logical
//'
//' @export
// [[Rcpp::export]]
bool is_music_stream_playing(Music music) {
  return IsMusicStreamPlaying(music);
}

//' Update music stream
//'
//' Updates buffers for music streaming.
//'
//' @param music A music
//'
//' @export
// [[Rcpp::export]]
void update_music_stream(Music music) {
  return UpdateMusicStream(music);
}

//' Stop music stream
//'
//' Stop music playing.
//'
//' @param music A music
//'
//' @export
// [[Rcpp::export]]
void stop_music_stream(Music music) {
  return StopMusicStream(music);
}

//' Pause music stream
//'
//' Pause music playing.
//'
//' @param music A music
//'
//' @export
// [[Rcpp::export]]
void pause_music_stream(Music music) {
  return PauseMusicStream(music);
}

//' Resume music stream
//'
//' Resume playing paused music.
//'
//' @param music A music
//'
//' @export
// [[Rcpp::export]]
void resume_music_stream(Music music) {
  return ResumeMusicStream(music);
}

//' Seek music stream
//'
//' Seek music to a position (in seconds).
//'
//' @param music A music
//' @param position A number
//'
//' @export
// [[Rcpp::export]]
void seek_music_stream(Music music, float position) {
  return SeekMusicStream(music, position);
}

//' Set music volume
//'
//' Set volume for music (1.0 is max level).
//'
//' @param music A music
//' @param volume A number
//'
//' @export
// [[Rcpp::export]]
void set_music_volume(Music music, float volume) {
  return SetMusicVolume(music, volume);
}

//' Set music pitch
//'
//' Set pitch for a music (1.0 is base level).
//'
//' @param music A music
//' @param pitch A number
//'
//' @export
// [[Rcpp::export]]
void set_music_pitch(Music music, float pitch) {
  return SetMusicPitch(music, pitch);
}

//' Get music time length
//'
//' Get music time length (in seconds).
//'
//' @param music A music
//' @return A number
//'
//' @export
// [[Rcpp::export]]
float get_music_time_length(Music music) {
  return GetMusicTimeLength(music);
}

//' Get music time played
//'
//' Get current music time played (in seconds).
//'
//' @param music A music
//' @return A number
//'
//' @export
// [[Rcpp::export]]
float get_music_time_played(Music music) {
  return GetMusicTimePlayed(music);
}

//' Vector 2 angle
//'
//' .
//'
//' @param v_1 A numeric vector of length 2
//' @param v_2 A numeric vector of length 2
//' @return A number
//'
//' @export
// [[Rcpp::export]]
float vector_2_angle(Vector2 v_1, Vector2 v_2) {
  return Vector2Angle(v_1, v_2);
}

//' Vector 2 move towards
//'
//' .
//'
//' @param v A numeric vector of length 2
//' @param target A numeric vector of length 2
//' @param max_distance A number
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 vector_2_move_towards(Vector2 v, Vector2 target, float max_distance) {
  return Vector2MoveTowards(v, target, max_distance);
}

//' Vector 2 distance
//'
//' .
//'
//' @param v_1 A numeric vector of length 2
//' @param v_2 A numeric vector of length 2
//' @return A number
//'
//' @export
// [[Rcpp::export]]
float vector_2_distance(Vector2 v_1, Vector2 v_2) {
  return Vector2Distance(v_1, v_2);
}

//' Vector 2 rotate
//'
//' .
//'
//' @param v A numeric vector of length 2
//' @param angle A number
//' @return A numeric vector of length 2
//'
//' @export
// [[Rcpp::export]]
Vector2 vector_2_rotate(Vector2 v, float angle) {
  return Vector2Rotate(v, angle);
}
