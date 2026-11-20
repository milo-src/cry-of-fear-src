
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c88a0 <.text+0xc78a0>:
100c88a0:	55                   	push   ebp
100c88a1:	8b ec                	mov    ebp,esp
100c88a3:	56                   	push   esi
100c88a4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c88a7:	57                   	push   edi
100c88a8:	8b f9                	mov    edi,ecx
100c88aa:	85 f6                	test   esi,esi
100c88ac:	74 42                	je     0x100c88f0
100c88ae:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100c88b4:	85 c0                	test   eax,eax
100c88b6:	74 38                	je     0x100c88f0
100c88b8:	6b c0 2c             	imul   eax,eax,0x2c
100c88bb:	f6 80 ac 18 23 10 08 	test   BYTE PTR [eax+0x102318ac],0x8
100c88c2:	74 2c                	je     0x100c88f0
100c88c4:	ff 15 ec 30 22 10    	call   DWORD PTR ds:0x102230ec
100c88ca:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100c88d0:	8b 89 94 00 00 00    	mov    ecx,DWORD PTR [ecx+0x94]
100c88d6:	83 e9 64             	sub    ecx,0x64
100c88d9:	3b c1                	cmp    eax,ecx
100c88db:	7c 13                	jl     0x100c88f0
100c88dd:	8b 07                	mov    eax,DWORD PTR [edi]
100c88df:	8b cf                	mov    ecx,edi
100c88e1:	56                   	push   esi
100c88e2:	8b 80 88 00 00 00    	mov    eax,DWORD PTR [eax+0x88]
100c88e8:	ff d0                	call   eax
100c88ea:	5f                   	pop    edi
100c88eb:	5e                   	pop    esi
100c88ec:	5d                   	pop    ebp
100c88ed:	c2 04 00             	ret    0x4
100c88f0:	d9 ee                	fldz
100c88f2:	5f                   	pop    edi
100c88f3:	5e                   	pop    esi
100c88f4:	5d                   	pop    ebp
100c88f5:	c2 04 00             	ret    0x4
