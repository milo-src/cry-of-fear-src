
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101409fc <.text+0x13f9fc>:
101409fc:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
101409ff:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10140a02:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10140a05:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10140a08:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10140a0b:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10140a0e:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10140a12:	5e                   	pop    esi
10140a13:	5f                   	pop    edi
10140a14:	c3                   	ret
10140a15:	f7 c7 0f 00 00 00    	test   edi,0xf
10140a1b:	74 0f                	je     0x10140a2c
10140a1d:	49                   	dec    ecx
10140a1e:	4e                   	dec    esi
10140a1f:	4f                   	dec    edi
10140a20:	8a 06                	mov    al,BYTE PTR [esi]
10140a22:	88 07                	mov    BYTE PTR [edi],al
10140a24:	f7 c7 0f 00 00 00    	test   edi,0xf
10140a2a:	75 f1                	jne    0x10140a1d
10140a2c:	81 f9 80 00 00 00    	cmp    ecx,0x80
10140a32:	72 68                	jb     0x10140a9c
10140a34:	81 ee 80 00 00 00    	sub    esi,0x80
10140a3a:	81 ef 80 00 00 00    	sub    edi,0x80
10140a40:	f3 0f 6f 06          	movdqu xmm0,XMMWORD PTR [esi]
10140a44:	f3 0f 6f 4e 10       	movdqu xmm1,XMMWORD PTR [esi+0x10]
10140a49:	f3 0f 6f 56 20       	movdqu xmm2,XMMWORD PTR [esi+0x20]
10140a4e:	f3 0f 6f 5e 30       	movdqu xmm3,XMMWORD PTR [esi+0x30]
10140a53:	f3 0f 6f 66 40       	movdqu xmm4,XMMWORD PTR [esi+0x40]
10140a58:	f3 0f 6f 6e 50       	movdqu xmm5,XMMWORD PTR [esi+0x50]
10140a5d:	f3 0f 6f 76 60       	movdqu xmm6,XMMWORD PTR [esi+0x60]
10140a62:	f3 0f 6f 7e 70       	movdqu xmm7,XMMWORD PTR [esi+0x70]
10140a67:	f3 0f 7f 07          	movdqu XMMWORD PTR [edi],xmm0
10140a6b:	f3 0f 7f 4f 10       	movdqu XMMWORD PTR [edi+0x10],xmm1
10140a70:	f3 0f 7f 57 20       	movdqu XMMWORD PTR [edi+0x20],xmm2
10140a75:	f3 0f 7f 5f 30       	movdqu XMMWORD PTR [edi+0x30],xmm3
10140a7a:	f3 0f 7f 67 40       	movdqu XMMWORD PTR [edi+0x40],xmm4
10140a7f:	f3 0f 7f 6f 50       	movdqu XMMWORD PTR [edi+0x50],xmm5
10140a84:	f3 0f 7f 77 60       	movdqu XMMWORD PTR [edi+0x60],xmm6
10140a89:	f3 0f 7f 7f 70       	movdqu XMMWORD PTR [edi+0x70],xmm7
10140a8e:	81 e9 80 00 00 00    	sub    ecx,0x80
10140a94:	f7 c1 80 ff ff ff    	test   ecx,0xffffff80
10140a9a:	75 90                	jne    0x10140a2c
10140a9c:	83 f9 20             	cmp    ecx,0x20
10140a9f:	72 23                	jb     0x10140ac4
10140aa1:	83 ee 20             	sub    esi,0x20
10140aa4:	83 ef 20             	sub    edi,0x20
10140aa7:	f3 0f 6f 06          	movdqu xmm0,XMMWORD PTR [esi]
10140aab:	f3 0f 6f 4e 10       	movdqu xmm1,XMMWORD PTR [esi+0x10]
10140ab0:	f3 0f 7f 07          	movdqu XMMWORD PTR [edi],xmm0
10140ab4:	f3 0f 7f 4f 10       	movdqu XMMWORD PTR [edi+0x10],xmm1
10140ab9:	83 e9 20             	sub    ecx,0x20
10140abc:	f7 c1 e0 ff ff ff    	test   ecx,0xffffffe0
10140ac2:	75 dd                	jne    0x10140aa1
10140ac4:	f7 c1 fc ff ff ff    	test   ecx,0xfffffffc
10140aca:	74 15                	je     0x10140ae1
10140acc:	83 ef 04             	sub    edi,0x4
10140acf:	83 ee 04             	sub    esi,0x4
10140ad2:	8b 06                	mov    eax,DWORD PTR [esi]
10140ad4:	89 07                	mov    DWORD PTR [edi],eax
10140ad6:	83 e9 04             	sub    ecx,0x4
10140ad9:	f7 c1 fc ff ff ff    	test   ecx,0xfffffffc
10140adf:	75 eb                	jne    0x10140acc
10140ae1:	85 c9                	test   ecx,ecx
10140ae3:	74 0f                	je     0x10140af4
10140ae5:	83 ef 01             	sub    edi,0x1
10140ae8:	83 ee 01             	sub    esi,0x1
10140aeb:	8a 06                	mov    al,BYTE PTR [esi]
10140aed:	88 07                	mov    BYTE PTR [edi],al
10140aef:	83 e9 01             	sub    ecx,0x1
10140af2:	75 f1                	jne    0x10140ae5
10140af4:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10140af8:	5e                   	pop    esi
10140af9:	5f                   	pop    edi
10140afa:	c3                   	ret
