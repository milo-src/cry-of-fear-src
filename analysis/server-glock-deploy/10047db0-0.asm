
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047db0 <.text+0x46db0>:
10047db0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047db5:	56                   	push   esi
10047db6:	8b f1                	mov    esi,ecx
10047db8:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10047dbc:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10047dc3:	00 
10047dc4:	0f 2f c1             	comiss xmm0,xmm1
10047dc7:	0f 87 96 00 00 00    	ja     0x10047e63
10047dcd:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
10047dd4:	00 
10047dd5:	0f 2f c1             	comiss xmm0,xmm1
10047dd8:	0f 87 85 00 00 00    	ja     0x10047e63
10047dde:	80 be 00 02 00 00 00 	cmp    BYTE PTR [esi+0x200],0x0
10047de5:	74 7c                	je     0x10047e63
10047de7:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
10047dee:	75 73                	jne    0x10047e63
10047df0:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10047df7:	75 6a                	jne    0x10047e63
10047df9:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10047e00:	75 61                	jne    0x10047e63
10047e02:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10047e09:	8b 06                	mov    eax,DWORD PTR [esi]
10047e0b:	6a 00                	push   0x0
10047e0d:	6a 01                	push   0x1
10047e0f:	74 04                	je     0x10047e15
10047e11:	6a 11                	push   0x11
10047e13:	eb 02                	jmp    0x10047e17
10047e15:	6a 12                	push   0x12
10047e17:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10047e1d:	8b 06                	mov    eax,DWORD PTR [esi]
10047e1f:	51                   	push   ecx
10047e20:	8b ce                	mov    ecx,esi
10047e22:	c7 04 24 9a 99 99 3e 	mov    DWORD PTR [esp],0x3e99999a
10047e29:	ff 50 08             	call   DWORD PTR [eax+0x8]
10047e2c:	c7 46 78 c0 7c 04 10 	mov    DWORD PTR [esi+0x78],0x10047cc0
10047e33:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047e38:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047e3c:	0f 5a c0             	cvtps2pd xmm0,xmm0
10047e3f:	f2 0f 58 05 50 9b 1a 	addsd  xmm0,QWORD PTR ds:0x101a9b50
10047e46:	10 
10047e47:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10047e4b:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
10047e52:	00 
10047e53:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10047e5a:	00 
10047e5b:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10047e62:	00 
10047e63:	5e                   	pop    esi
10047e64:	c3                   	ret
