
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e520 <.text+0x11d520>:
1011e520:	56                   	push   esi
1011e521:	8b f1                	mov    esi,ecx
1011e523:	83 ec 08             	sub    esp,0x8
1011e526:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
1011e52d:	00 
1011e52e:	0f 5a c0             	cvtps2pd xmm0,xmm0
1011e531:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1011e536:	68 44 67 1e 10       	push   0x101e6744
1011e53b:	6a 01                	push   0x1
1011e53d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011e543:	f3 0f 10 86 d8 01 00 	movss  xmm0,DWORD PTR [esi+0x1d8]
1011e54a:	00 
1011e54b:	83 c4 08             	add    esp,0x8
1011e54e:	0f 5a c0             	cvtps2pd xmm0,xmm0
1011e551:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1011e556:	68 54 67 1e 10       	push   0x101e6754
1011e55b:	6a 01                	push   0x1
1011e55d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011e563:	ff b6 f0 01 00 00    	push   DWORD PTR [esi+0x1f0]
1011e569:	68 64 67 1e 10       	push   0x101e6764
1011e56e:	6a 01                	push   0x1
1011e570:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011e576:	ff b6 e4 01 00 00    	push   DWORD PTR [esi+0x1e4]
1011e57c:	68 74 67 1e 10       	push   0x101e6774
1011e581:	6a 01                	push   0x1
1011e583:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011e589:	83 c4 28             	add    esp,0x28
1011e58c:	5e                   	pop    esi
1011e58d:	c3                   	ret
