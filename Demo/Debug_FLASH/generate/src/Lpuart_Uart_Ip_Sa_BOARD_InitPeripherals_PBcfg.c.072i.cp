
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lpuart1_Callback/28:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Lpuart_Uart_Ip_apStateStructure/29 (Lpuart_Uart_Ip_apStateStructure) @05deec60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/27 (addr)
  Availability: not_available
  Varpool flags:
Lpuart1_Callback/28 (Lpuart1_Callback) @05ded7e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/27 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/27 (Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS) @05d12cf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Lpuart1_Callback/28 (addr)Lpuart_Uart_Ip_apStateStructure/29 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
