
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020e60 <.text+0x1fe60>:
10020e60:	55                   	push   ebp
10020e61:	8b ec                	mov    ebp,esp
10020e63:	83 ec 18             	sub    esp,0x18
10020e66:	56                   	push   esi
10020e67:	8b f1                	mov    esi,ecx
10020e69:	8b 06                	mov    eax,DWORD PTR [esi]
10020e6b:	ff 50 30             	call   DWORD PTR [eax+0x30]
10020e6e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10020e71:	8b 91 b8 00 00 00    	mov    edx,DWORD PTR [ecx+0xb8]
10020e77:	85 d2                	test   edx,edx
10020e79:	74 10                	je     0x10020e8b
10020e7b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10020e80:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10020e86:	03 c2                	add    eax,edx
10020e88:	50                   	push   eax
10020e89:	eb 05                	jmp    0x10020e90
10020e8b:	68 f4 9a 1a 10       	push   0x101a9af4
10020e90:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10020e96:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10020e9c:	83 c4 08             	add    esp,0x8
10020e9f:	c7 45 f4 00 00 80 41 	mov    DWORD PTR [ebp-0xc],0x41800000
10020ea6:	8d 45 f4             	lea    eax,[ebp-0xc]
10020ea9:	c7 45 f8 00 00 80 41 	mov    DWORD PTR [ebp-0x8],0x41800000
10020eb0:	c7 45 fc 00 00 10 42 	mov    DWORD PTR [ebp-0x4],0x42100000
10020eb7:	c7 45 e8 00 00 80 c1 	mov    DWORD PTR [ebp-0x18],0xc1800000
10020ebe:	50                   	push   eax
10020ebf:	8d 45 e8             	lea    eax,[ebp-0x18]
10020ec2:	c7 45 ec 00 00 80 c1 	mov    DWORD PTR [ebp-0x14],0xc1800000
10020ec9:	50                   	push   eax
10020eca:	ff 76 04             	push   DWORD PTR [esi+0x4]
10020ecd:	c7 45 f0 00 00 10 c2 	mov    DWORD PTR [ebp-0x10],0xc2100000
10020ed4:	e8 57 91 0f 00       	call   0x1011a030
10020ed9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10020edc:	83 c4 0c             	add    esp,0xc
10020edf:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10020ee6:	00 00 00 
10020ee9:	83 be f0 03 00 00 01 	cmp    DWORD PTR [esi+0x3f0],0x1
10020ef0:	c7 86 1c 03 00 00 ff 	mov    DWORD PTR [esi+0x31c],0xffffffff
10020ef7:	ff ff ff 
10020efa:	c7 86 24 02 00 00 00 	mov    DWORD PTR [esi+0x224],0x0
10020f01:	00 00 00 
10020f04:	c7 86 80 00 00 00 b0 	mov    DWORD PTR [esi+0x80],0x10020cb0
10020f0b:	0c 02 10 
10020f0e:	7d 0a                	jge    0x10020f1a
10020f10:	c7 86 f0 03 00 00 01 	mov    DWORD PTR [esi+0x3f0],0x1
10020f17:	00 00 00 
10020f1a:	5e                   	pop    esi
10020f1b:	8b e5                	mov    esp,ebp
10020f1d:	5d                   	pop    ebp
10020f1e:	c3                   	ret
