
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101064f0 <.text+0x1054f0>:
101064f0:	55                   	push   ebp
101064f1:	8b ec                	mov    ebp,esp
101064f3:	56                   	push   esi
101064f4:	57                   	push   edi
101064f5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
101064f8:	8b f1                	mov    esi,ecx
101064fa:	8b cf                	mov    ecx,edi
101064fc:	8b 07                	mov    eax,DWORD PTR [edi]
101064fe:	8b 80 d0 00 00 00    	mov    eax,DWORD PTR [eax+0xd0]
10106504:	ff d0                	call   eax
10106506:	85 c0                	test   eax,eax
10106508:	74 70                	je     0x1010657a
1010650a:	f6 86 ec 02 00 00 01 	test   BYTE PTR [esi+0x2ec],0x1
10106511:	75 67                	jne    0x1010657a
10106513:	8b ce                	mov    ecx,esi
10106515:	e8 36 ea ff ff       	call   0x10104f50
1010651a:	85 c0                	test   eax,eax
1010651c:	75 5c                	jne    0x1010657a
1010651e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10106521:	f3 0f 10 50 24       	movss  xmm2,DWORD PTR [eax+0x24]
10106526:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
1010652b:	0f 5a d2             	cvtps2pd xmm2,xmm2
1010652e:	0f 5a c0             	cvtps2pd xmm0,xmm0
10106531:	0f 54 15 90 1f 1a 10 	andps  xmm2,XMMWORD PTR ds:0x101a1f90
10106538:	0f 54 05 90 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f90
1010653f:	f2 0f 58 d0          	addsd  xmm2,xmm0
10106543:	66 0f 5a c2          	cvtpd2ps xmm0,xmm2
10106547:	0f 2f 05 fc 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1efc
1010654e:	76 2a                	jbe    0x1010657a
10106550:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x10000000
10106557:	00 00 10 
1010655a:	83 ec 0c             	sub    esp,0xc
1010655d:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10106560:	8b cc                	mov    ecx,esp
10106562:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
10106565:	89 01                	mov    DWORD PTR [ecx],eax
10106567:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1010656a:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1010656d:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
10106570:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10106573:	8b ce                	mov    ecx,esi
10106575:	e8 76 9b fb ff       	call   0x100c00f0
1010657a:	5f                   	pop    edi
1010657b:	5e                   	pop    esi
1010657c:	5d                   	pop    ebp
1010657d:	c2 04 00             	ret    0x4
