
#ifndef _HANGOUTS_EVENTS_H_
#define _HANGOUTS_EVENTS_H_

#include "libhangouts.h"
#include "hangouts.pb-c.h"

void hangouts_register_events(gpointer plugin);

void hangouts_received_other_notification(PurpleConnection *pc, StateUpdate *state_update);
void hangouts_received_event_notification(PurpleConnection *pc, StateUpdate *state_update);
void hangouts_received_presence_notification(PurpleConnection *pc, StateUpdate *state_update);
void hangouts_received_typing_notification(PurpleConnection *pc, StateUpdate *state_update);
void hangouts_received_watermark_notification(PurpleConnection *pc, StateUpdate *state_update);
void hangouts_received_state_update(PurpleConnection *pc, StateUpdate *state_update);


void hangouts_process_presence_result(HangoutsAccount *ha, PresenceResult *presence);

#endif /*_HANGOUTS_EVENTS_H_*/