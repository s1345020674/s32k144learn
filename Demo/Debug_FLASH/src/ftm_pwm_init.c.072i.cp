
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Ftm_Pwm_Ip_DeInit/7:
  Jump functions of caller  Ftm_Pwm_Ip_UpdatePwmChannel/6:
  Jump functions of caller  Ftm_Pwm_Ip_UpdatePwmPeriod/5:
  Jump functions of caller  Ftm_Pwm_Ip_Init/3:
  Jump functions of caller  FTM_PWM_DEINIT/2:
  Jump functions of caller  FTM_PWM_INIT/1:

 Propagating constants:

Not considering FTM_PWM_DEINIT for cloning; -fipa-cp-clone disabled.
Not considering FTM_PWM_INIT for cloning; -fipa-cp-clone disabled.

overall_size: 21, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: FTM_PWM_DEINIT/2:
  Node: FTM_PWM_INIT/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Ftm_Pwm_Ip_DeInit/7 (Ftm_Pwm_Ip_DeInit) @05e1f380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_PWM_DEINIT/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Pwm_Ip_UpdatePwmChannel/6 (Ftm_Pwm_Ip_UpdatePwmChannel) @05e1fe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_PWM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Pwm_Ip_UpdatePwmPeriod/5 (Ftm_Pwm_Ip_UpdatePwmPeriod) @05e1fd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_PWM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0/4 (Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0) @05e1e750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: FTM_PWM_INIT/1 (addr)
  Availability: not_available
  Varpool flags: read-only
Ftm_Pwm_Ip_Init/3 (Ftm_Pwm_Ip_Init) @05e1fc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FTM_PWM_INIT/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FTM_PWM_DEINIT/2 (FTM_PWM_DEINIT) @05e1f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Pwm_Ip_DeInit/7 (1073741824 (estimated locally),1.00 per call) 
FTM_PWM_INIT/1 (FTM_PWM_INIT) @05e1f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Ftm_Pwm_Ip_UpdatePwmChannel/6 (1073741824 (estimated locally),1.00 per call) Ftm_Pwm_Ip_UpdatePwmPeriod/5 (1073741824 (estimated locally),1.00 per call) Ftm_Pwm_Ip_Init/3 (1073741824 (estimated locally),1.00 per call) 

;; Function FTM_PWM_INIT (FTM_PWM_INIT, funcdef_no=1, decl_uid=5866, cgraph_uid=2, symbol_order=1)

Modification phase of node FTM_PWM_INIT/1
FTM_PWM_INIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ftm_Pwm_Ip_Init (0, &Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0);
  # DEBUG BEGIN_STMT
  Ftm_Pwm_Ip_UpdatePwmPeriod (0, 20480, 1);
  # DEBUG BEGIN_STMT
  Ftm_Pwm_Ip_UpdatePwmChannel (0, 0, 0, 0, 1);
  return;

}



;; Function FTM_PWM_DEINIT (FTM_PWM_DEINIT, funcdef_no=2, decl_uid=5868, cgraph_uid=3, symbol_order=2)

Modification phase of node FTM_PWM_DEINIT/2
FTM_PWM_DEINIT ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Ftm_Pwm_Ip_DeInit (0);
  return;

}


