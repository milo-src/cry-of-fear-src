
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104de0 <.text+0x103de0>:
10104de0:	55                   	push   ebp
10104de1:	8b ec                	mov    ebp,esp
10104de3:	56                   	push   esi
10104de4:	57                   	push   edi
10104de5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10104de8:	8b f1                	mov    esi,ecx
10104dea:	8b cf                	mov    ecx,edi
10104dec:	8b 07                	mov    eax,DWORD PTR [edi]
10104dee:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10104df4:	85 c0                	test   eax,eax
10104df6:	74 14                	je     0x10104e0c
10104df8:	f6 86 ec 02 00 00 01 	test   BYTE PTR [esi+0x2ec],0x1
10104dff:	74 0b                	je     0x10104e0c
10104e01:	5f                   	pop    edi
10104e02:	b8 02 00 00 00       	mov    eax,0x2
10104e07:	5e                   	pop    esi
10104e08:	5d                   	pop    ebp
10104e09:	c2 04 00             	ret    0x4
10104e0c:	57                   	push   edi
10104e0d:	8b ce                	mov    ecx,esi
10104e0f:	e8 dc a9 fb ff       	call   0x100bf7f0
10104e14:	5f                   	pop    edi
10104e15:	5e                   	pop    esi
10104e16:	5d                   	pop    ebp
10104e17:	c2 04 00             	ret    0x4
