
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105eb0 <.text+0x104eb0>:
10105eb0:	55                   	push   ebp
10105eb1:	8b ec                	mov    ebp,esp
10105eb3:	53                   	push   ebx
10105eb4:	56                   	push   esi
10105eb5:	8b f1                	mov    esi,ecx
10105eb7:	8b 06                	mov    eax,DWORD PTR [esi]
10105eb9:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10105ebf:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10105ec2:	85 c0                	test   eax,eax
10105ec4:	74 41                	je     0x10105f07
10105ec6:	85 db                	test   ebx,ebx
10105ec8:	74 3d                	je     0x10105f07
10105eca:	83 be 24 02 00 00 05 	cmp    DWORD PTR [esi+0x224],0x5
10105ed1:	74 34                	je     0x10105f07
10105ed3:	f6 83 a8 01 00 00 08 	test   BYTE PTR [ebx+0x1a8],0x8
10105eda:	74 2b                	je     0x10105f07
10105edc:	57                   	push   edi
10105edd:	6a 00                	push   0x0
10105edf:	8b ce                	mov    ecx,esi
10105ee1:	e8 8a e7 ff ff       	call   0x10104670
10105ee6:	8b f8                	mov    edi,eax
10105ee8:	85 ff                	test   edi,edi
10105eea:	74 1a                	je     0x10105f06
10105eec:	8b 17                	mov    edx,DWORD PTR [edi]
10105eee:	8b cf                	mov    ecx,edi
10105ef0:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10105ef6:	85 c0                	test   eax,eax
10105ef8:	74 0c                	je     0x10105f06
10105efa:	68 54 9e 21 10       	push   0x10219e54
10105eff:	8b cf                	mov    ecx,edi
10105f01:	e8 4a 4b f0 ff       	call   0x1000aa50
10105f06:	5f                   	pop    edi
10105f07:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10105f0a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10105f0f:	51                   	push   ecx
10105f10:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10105f15:	8b ce                	mov    ecx,esi
10105f17:	53                   	push   ebx
10105f18:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10105f1b:	e8 30 5d f8 ff       	call   0x1008bc50
10105f20:	5e                   	pop    esi
10105f21:	5b                   	pop    ebx
10105f22:	5d                   	pop    ebp
10105f23:	c2 10 00             	ret    0x10
