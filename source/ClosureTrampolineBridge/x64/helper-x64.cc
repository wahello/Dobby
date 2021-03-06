#include "dobby_internal.h"

void set_routing_bridge_next_hop(RegisterContext *ctx, void *address) {
  addr_t rsp = ctx->general.regs.rsp;

  addr_t entry_placeholder_stack_addr     = rsp + 8 * 16 + 8;
  *(addr_t *)entry_placeholder_stack_addr = (addr_t)address;
}

void get_routing_bridge_next_hop(RegisterContext *ctx, void *address) {
}
