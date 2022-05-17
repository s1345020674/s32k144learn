
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/34:
  Jump functions of caller  LPUART_UART_IP_1_IRQHandler/33:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/32:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/31:
  Jump functions of caller  IntCtrl_Ip_Init/29:
  Jump functions of caller  INTERRUPT_INIT/28:

 Propagating constants:

Not considering INTERRUPT_INIT for cloning; -fipa-cp-clone disabled.

overall_size: 17, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: INTERRUPT_INIT/28:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CAN0_ORED_0_15_MB_IRQHandler/34 (CAN0_ORED_0_15_MB_IRQHandler) @06e41b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: INTERRUPT_INIT/28 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
LPUART_UART_IP_1_IRQHandler/33 (LPUART_UART_IP_1_IRQHandler) @06e41a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: INTERRUPT_INIT/28 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/32 (IntCtrl_Ip_InstallHandler) @06e419a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: INTERRUPT_INIT/28 (1073741824 (estimated locally),1.00 per call) INTERRUPT_INIT/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/31 (IntCtrl_Ip_EnableIrq) @06e418c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: INTERRUPT_INIT/28 (1073741824 (estimated locally),1.00 per call) INTERRUPT_INIT/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrlConfig_0/30 (IntCtrlConfig_0) @06e40708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: INTERRUPT_INIT/28 (addr)
  Availability: not_available
  Varpool flags: read-only
IntCtrl_Ip_Init/29 (IntCtrl_Ip_Init) @06e417e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: INTERRUPT_INIT/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
INTERRUPT_INIT/28 (INTERRUPT_INIT) @06e41380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: IntCtrlConfig_0/30 (addr)LPUART_UART_IP_1_IRQHandler/33 (addr)CAN0_ORED_0_15_MB_IRQHandler/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandler/32 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/31 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/32 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/31 (1073741824 (estimated locally),1.00 per call) IntCtrl_Ip_Init/29 (1073741824 (estimated locally),1.00 per call) 

;; Function INTERRUPT_INIT (INTERRUPT_INIT, funcdef_no=28, decl_uid=6961, cgraph_uid=29, symbol_order=28)

Modification phase of node INTERRUPT_INIT/28
INTERRUPT_INIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_Init (&IntCtrlConfig_0);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (33);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (33, LPUART_UART_IP_1_IRQHandler, 0B);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrq (81);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (81, CAN0_ORED_0_15_MB_IRQHandler, 0B);
  return;

}

