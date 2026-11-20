
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10140b00 <.text+0x13fb00>:
10140b00:	8b c6                	mov    eax,esi
10140b02:	83 e0 0f             	and    eax,0xf
10140b05:	85 c0                	test   eax,eax
10140b07:	0f 85 e3 00 00 00    	jne    0x10140bf0
10140b0d:	8b d1                	mov    edx,ecx
10140b0f:	83 e1 7f             	and    ecx,0x7f
10140b12:	c1 ea 07             	shr    edx,0x7
10140b15:	74 66                	je     0x10140b7d
10140b17:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
10140b1e:	8b ff                	mov    edi,edi
10140b20:	66 0f 6f 06          	movdqa xmm0,XMMWORD PTR [esi]
10140b24:	66 0f 6f 4e 10       	movdqa xmm1,XMMWORD PTR [esi+0x10]
10140b29:	66 0f 6f 56 20       	movdqa xmm2,XMMWORD PTR [esi+0x20]
10140b2e:	66 0f 6f 5e 30       	movdqa xmm3,XMMWORD PTR [esi+0x30]
10140b33:	66 0f 7f 07          	movdqa XMMWORD PTR [edi],xmm0
10140b37:	66 0f 7f 4f 10       	movdqa XMMWORD PTR [edi+0x10],xmm1
10140b3c:	66 0f 7f 57 20       	movdqa XMMWORD PTR [edi+0x20],xmm2
10140b41:	66 0f 7f 5f 30       	movdqa XMMWORD PTR [edi+0x30],xmm3
10140b46:	66 0f 6f 66 40       	movdqa xmm4,XMMWORD PTR [esi+0x40]
10140b4b:	66 0f 6f 6e 50       	movdqa xmm5,XMMWORD PTR [esi+0x50]
10140b50:	66 0f 6f 76 60       	movdqa xmm6,XMMWORD PTR [esi+0x60]
10140b55:	66 0f 6f 7e 70       	movdqa xmm7,XMMWORD PTR [esi+0x70]
10140b5a:	66 0f 7f 67 40       	movdqa XMMWORD PTR [edi+0x40],xmm4
10140b5f:	66 0f 7f 6f 50       	movdqa XMMWORD PTR [edi+0x50],xmm5
10140b64:	66 0f 7f 77 60       	movdqa XMMWORD PTR [edi+0x60],xmm6
10140b69:	66 0f 7f 7f 70       	movdqa XMMWORD PTR [edi+0x70],xmm7
10140b6e:	8d b6 80 00 00 00    	lea    esi,[esi+0x80]
10140b74:	8d bf 80 00 00 00    	lea    edi,[edi+0x80]
10140b7a:	4a                   	dec    edx
10140b7b:	75 a3                	jne    0x10140b20
10140b7d:	85 c9                	test   ecx,ecx
10140b7f:	74 5f                	je     0x10140be0
10140b81:	8b d1                	mov    edx,ecx
10140b83:	c1 ea 05             	shr    edx,0x5
10140b86:	85 d2                	test   edx,edx
10140b88:	74 21                	je     0x10140bab
10140b8a:	8d 9b 00 00 00 00    	lea    ebx,[ebx+0x0]
10140b90:	f3 0f 6f 06          	movdqu xmm0,XMMWORD PTR [esi]
10140b94:	f3 0f 6f 4e 10       	movdqu xmm1,XMMWORD PTR [esi+0x10]
10140b99:	f3 0f 7f 07          	movdqu XMMWORD PTR [edi],xmm0
10140b9d:	f3 0f 7f 4f 10       	movdqu XMMWORD PTR [edi+0x10],xmm1
10140ba2:	8d 76 20             	lea    esi,[esi+0x20]
10140ba5:	8d 7f 20             	lea    edi,[edi+0x20]
10140ba8:	4a                   	dec    edx
10140ba9:	75 e5                	jne    0x10140b90
10140bab:	83 e1 1f             	and    ecx,0x1f
10140bae:	74 30                	je     0x10140be0
10140bb0:	8b c1                	mov    eax,ecx
10140bb2:	c1 e9 02             	shr    ecx,0x2
10140bb5:	74 0f                	je     0x10140bc6
10140bb7:	8b 16                	mov    edx,DWORD PTR [esi]
10140bb9:	89 17                	mov    DWORD PTR [edi],edx
10140bbb:	83 c7 04             	add    edi,0x4
10140bbe:	83 c6 04             	add    esi,0x4
10140bc1:	83 e9 01             	sub    ecx,0x1
10140bc4:	75 f1                	jne    0x10140bb7
10140bc6:	8b c8                	mov    ecx,eax
10140bc8:	83 e1 03             	and    ecx,0x3
10140bcb:	74 13                	je     0x10140be0
10140bcd:	8a 06                	mov    al,BYTE PTR [esi]
10140bcf:	88 07                	mov    BYTE PTR [edi],al
10140bd1:	46                   	inc    esi
10140bd2:	47                   	inc    edi
10140bd3:	49                   	dec    ecx
10140bd4:	75 f7                	jne    0x10140bcd
10140bd6:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
10140bdd:	8d 49 00             	lea    ecx,[ecx+0x0]
10140be0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10140be4:	5e                   	pop    esi
10140be5:	5f                   	pop    edi
10140be6:	c3                   	ret
