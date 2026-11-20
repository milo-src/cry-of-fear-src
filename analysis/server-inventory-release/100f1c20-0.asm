
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1c20 <.text+0xf0c20>:
100f1c20:	55                   	push   ebp
100f1c21:	8b ec                	mov    ebp,esp
100f1c23:	56                   	push   esi
100f1c24:	8b f1                	mov    esi,ecx
100f1c26:	8b 8e 34 25 00 00    	mov    ecx,DWORD PTR [esi+0x2534]
100f1c2c:	85 c9                	test   ecx,ecx
100f1c2e:	0f 84 b9 00 00 00    	je     0x100f1ced
100f1c34:	80 7d 08 00          	cmp    BYTE PTR [ebp+0x8],0x0
100f1c38:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100f1c3e:	75 46                	jne    0x100f1c86
100f1c40:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100f1c46:	f3 0f 10 0a          	movss  xmm1,DWORD PTR [edx]
100f1c4a:	f3 0f 10 80 cc 01 00 	movss  xmm0,DWORD PTR [eax+0x1cc]
100f1c51:	00 
100f1c52:	0f 2f c1             	comiss xmm0,xmm1
100f1c55:	0f 87 92 00 00 00    	ja     0x100f1ced
100f1c5b:	f3 0f 10 80 d0 01 00 	movss  xmm0,DWORD PTR [eax+0x1d0]
100f1c62:	00 
100f1c63:	0f 2f c1             	comiss xmm0,xmm1
100f1c66:	0f 87 81 00 00 00    	ja     0x100f1ced
100f1c6c:	f3 0f 10 80 d4 01 00 	movss  xmm0,DWORD PTR [eax+0x1d4]
100f1c73:	00 
100f1c74:	0f 2f c1             	comiss xmm0,xmm1
100f1c77:	77 74                	ja     0x100f1ced
100f1c79:	f3 0f 10 86 08 03 00 	movss  xmm0,DWORD PTR [esi+0x308]
100f1c80:	00 
100f1c81:	0f 2f c1             	comiss xmm0,xmm1
100f1c84:	77 67                	ja     0x100f1ced
100f1c86:	f3 0f 10 86 e4 1e 00 	movss  xmm0,DWORD PTR [esi+0x1ee4]
100f1c8d:	00 
100f1c8e:	0f 2f 02             	comiss xmm0,DWORD PTR [edx]
100f1c91:	77 5a                	ja     0x100f1ced
100f1c93:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1c95:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
100f1c9b:	85 c0                	test   eax,eax
100f1c9d:	74 4e                	je     0x100f1ced
100f1c9f:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100f1ca5:	85 c9                	test   ecx,ecx
100f1ca7:	74 0c                	je     0x100f1cb5
100f1ca9:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1cab:	ff 90 48 01 00 00    	call   DWORD PTR [eax+0x148]
100f1cb1:	85 c0                	test   eax,eax
100f1cb3:	74 38                	je     0x100f1ced
100f1cb5:	8b ce                	mov    ecx,esi
100f1cb7:	e8 84 f7 ff ff       	call   0x100f1440
100f1cbc:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100f1cc2:	85 c9                	test   ecx,ecx
100f1cc4:	74 0e                	je     0x100f1cd4
100f1cc6:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1cc8:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100f1cce:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100f1cd4:	8b 86 34 25 00 00    	mov    eax,DWORD PTR [esi+0x2534]
100f1cda:	c6 86 f9 1e 00 00 01 	mov    BYTE PTR [esi+0x1ef9],0x1
100f1ce1:	89 86 38 25 00 00    	mov    DWORD PTR [esi+0x2538],eax
100f1ce7:	89 8e 34 25 00 00    	mov    DWORD PTR [esi+0x2534],ecx
100f1ced:	5e                   	pop    esi
100f1cee:	5d                   	pop    ebp
100f1cef:	c2 04 00             	ret    0x4
