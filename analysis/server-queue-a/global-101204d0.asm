
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101204d0 <.text+0x11f4d0>:
101204d0:	57                   	push   edi
101204d1:	8b f9                	mov    edi,ecx
101204d3:	8b 07                	mov    eax,DWORD PTR [edi]
101204d5:	85 c0                	test   eax,eax
101204d7:	74 1a                	je     0x101204f3
101204d9:	56                   	push   esi
101204da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
101204e0:	8b 70 64             	mov    esi,DWORD PTR [eax+0x64]
101204e3:	50                   	push   eax
101204e4:	e8 e8 0f 05 00       	call   0x101714d1
101204e9:	83 c4 04             	add    esp,0x4
101204ec:	8b c6                	mov    eax,esi
101204ee:	85 f6                	test   esi,esi
101204f0:	75 ee                	jne    0x101204e0
101204f2:	5e                   	pop    esi
101204f3:	8b cf                	mov    ecx,edi
101204f5:	5f                   	pop    edi
101204f6:	e9 25 10 00 00       	jmp    0x10121520
