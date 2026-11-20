
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10140964 <.text+0x13f964>:
10140964:	8d 34 0e             	lea    esi,[esi+ecx*1]
10140967:	8d 3c 0f             	lea    edi,[edi+ecx*1]
1014096a:	83 f9 20             	cmp    ecx,0x20
1014096d:	0f 82 51 01 00 00    	jb     0x10140ac4
10140973:	0f ba 25 10 bb 21 10 	bt     DWORD PTR ds:0x1021bb10,0x1
1014097a:	01 
1014097b:	0f 82 94 00 00 00    	jb     0x10140a15
10140981:	f7 c7 03 00 00 00    	test   edi,0x3
10140987:	74 14                	je     0x1014099d
10140989:	8b d7                	mov    edx,edi
1014098b:	83 e2 03             	and    edx,0x3
1014098e:	2b ca                	sub    ecx,edx
10140990:	8a 46 ff             	mov    al,BYTE PTR [esi-0x1]
10140993:	88 47 ff             	mov    BYTE PTR [edi-0x1],al
10140996:	4e                   	dec    esi
10140997:	4f                   	dec    edi
10140998:	83 ea 01             	sub    edx,0x1
1014099b:	75 f3                	jne    0x10140990
1014099d:	83 f9 20             	cmp    ecx,0x20
101409a0:	0f 82 1e 01 00 00    	jb     0x10140ac4
101409a6:	8b d1                	mov    edx,ecx
101409a8:	c1 e9 02             	shr    ecx,0x2
101409ab:	83 e2 03             	and    edx,0x3
101409ae:	83 ee 04             	sub    esi,0x4
101409b1:	83 ef 04             	sub    edi,0x4
101409b4:	fd                   	std
101409b5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
101409b7:	fc                   	cld
101409b8:	ff 24 95 c0 09 14 10 	jmp    DWORD PTR [edx*4+0x101409c0]
