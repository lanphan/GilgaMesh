#include "app/feedback.h"
#include "cmocka_includes.h"

bool displayed_group_value_feedback = false;

void feedback_initialize(void) {}
void display_successful_start_up_feedback(void) {}
void display_vote_recorded_feedback(void) {}
void display_group_value_change_feedback(void) {
  displayed_group_value_feedback = true;
}
void display_failure_feedback(void) { }
void display_fun_feedback(void) { }