
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fbff0 <.text+0xfaff0>:
100fbff0:	55                   	push   ebp
100fbff1:	8b ec                	mov    ebp,esp
100fbff3:	56                   	push   esi
100fbff4:	8b f1                	mov    esi,ecx
100fbff6:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100fbffc:	e8 8f b7 f1 ff       	call   0x10017790
100fc001:	85 c0                	test   eax,eax
100fc003:	74 39                	je     0x100fc03e
100fc005:	8b 10                	mov    edx,DWORD PTR [eax]
100fc007:	8b c8                	mov    ecx,eax
100fc009:	ff 52 78             	call   DWORD PTR [edx+0x78]
100fc00c:	85 c0                	test   eax,eax
100fc00e:	74 2e                	je     0x100fc03e
100fc010:	83 b8 48 03 00 00 00 	cmp    DWORD PTR [eax+0x348],0x0
100fc017:	74 41                	je     0x100fc05a
100fc019:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fc01e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100fc022:	0f 5a c0             	cvtps2pd xmm0,xmm0
100fc025:	f2 0f 58 05 f0 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df0
100fc02c:	10 
100fc02d:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100fc031:	f3 0f 11 86 ac 03 00 	movss  DWORD PTR [esi+0x3ac],xmm0
100fc038:	00 
100fc039:	5e                   	pop    esi
100fc03a:	5d                   	pop    ebp
100fc03b:	c2 10 00             	ret    0x10
100fc03e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fc041:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
100fc047:	e8 f4 b6 f1 ff       	call   0x10017740
100fc04c:	8b ce                	mov    ecx,esi
100fc04e:	c7 46 78 c0 a8 0f 10 	mov    DWORD PTR [esi+0x78],0x100fa8c0
100fc055:	e8 66 e8 ff ff       	call   0x100fa8c0
100fc05a:	5e                   	pop    esi
100fc05b:	5d                   	pop    ebp
100fc05c:	c2 10 00             	ret    0x10
